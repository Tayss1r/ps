class TrieNode:
    def __init__(self):
        self.children = {}
        self.isend = False
class Trie:
    def __init__(self):
        self.root = TrieNode()
    def insert(self, word):
        curr = self.root
        for c in word:
            if c not in curr.children:
                curr.children[c] = TrieNode()
            curr = curr.children[c]
        curr.isend = True
    def _dfs(self, node, path, res):
        if node.isend:
            res.append(path)
        for c, nxt_node in node.children.items():
            self._dfs(nxt_node, path+c, res)
    def startsWith(self, prefix):
        curr = self.root
        for c in prefix:
            if c not in curr.children:
                return []
            curr = curr.children[c]
        res = []
        self._dfs(curr, prefix, res)
        return sorted(res)
class Solution:
    def suggestedProducts(self, products: List[str], searchWord: str) -> List[List[str]]:
        trie = Trie()
        for product in products:
            trie.insert(product)
        res = []
        prefix = ''
        for c in searchWord:
            prefix += c
            res.append(trie.startsWith(prefix)[:3])
        return res    
