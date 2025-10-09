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
        curr.is_end = True
    def sub(self, word, s):
        x = 0
        for c in word:
            x = s.find(c, x)
            if x == -1:
                return False
            x += 1
        return True

from typing import List 
class Solution:
    def numMatchingSubseq(self, s: str, words: List[str]) -> int:
        trie = Trie()
        for word in words:
            trie.insert(word)
        ans = 0
        for word in words:
            if trie.sub(word, s):
                ans += 1
        return ans
