from selenium import webdriver
from selenium.webdriver.firefox.service import Service
from selenium.webdriver.common.by import By
from selenium.webdriver.firefox.options import Options
from webdriver_manager.firefox import GeckoDriverManager
import pandas as pd

# Set up Firefox options
options = Options()
options.headless = True  # Run in headless mode (no browser window)

# Set up the driver (automatically downloads GeckoDriver)
driver = webdriver.Firefox(service=Service(GeckoDriverManager().install()), options=options)

# URL of the page to scrape
url = 'https://generik.fr/collections/coloration'

driver.get(url)

# Wait for the page to load (optional, increase time if needed)
driver.implicitly_wait(10)

# Find the products on the page (adjust these selectors to match the site's structure)
products = driver.find_elements(By.CSS_SELECTOR, 'div.product-grid-item')

# Initialize lists for data
product_names = []
product_descriptions = []
product_images = []

# Loop through the products and extract details
for product in products:
    try:
        name = product.find_element(By.CSS_SELECTOR, 'div.product-title a').text
    except:
        name = "N/A"
    
    try:
        description = product.find_element(By.CSS_SELECTOR, 'div.product-description').text
    except:
        description = "N/A"
    
    try:
        image = product.find_element(By.CSS_SELECTOR, 'img').get_attribute('src')
    except:
        image = "N/A"

    product_names.append(name)
    product_descriptions.append(description)
    product_images.append(image)

# Create a DataFrame and export to Excel
df = pd.DataFrame({
    'Product Name': product_names,
    'Description': product_descriptions,
    'Image URL': product_images
})

# Save to Excel file
df.to_excel('products.xlsx', index=False)

print("Excel file created: products.xlsx")

# Close the browser
driver.quit()
