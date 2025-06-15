class Solution:
    def findCenter(self, edges: List[List[int]]) -> int:
        if all(edges[0][0] in edge for edge in edges):
            return edges[0][0]
        return edges[0][1]