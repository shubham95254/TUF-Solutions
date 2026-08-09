# [Traversal Techniques](https://takeuforward.org/plus/dsa/problems/traversal-techniques?subject=dsa&approach=iterative-approach&tab=submissions)

![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-eab308?style=for-the-badge)

---

## 📝 Problem Statement

Given an undirected connected graph with V vertices numbered from 0 to V-1, the task is to implement both Depth First Search (DFS) and Breadth First Search (BFS) traversals starting from the 0th vertex.

The graph is represented using an array/vector of edges, where each element is a pair [u, v] indicating an undirected edge between vertex u and vertex v.

### Example 1

<img src="https://static.takeuforward.org/content/ProblemSetter-t7Vxky8v">

Input: V = 5, edges = [ [0, 1], [0, 2], [0, 3], [2, 4] ]

Output:[0, 2, 4, 3, 1], [0, 2, 3, 1, 4]

Explanation:

DFS: Start from vertex 0. Visit vertex 2, then vertex 4, backtrack to vertex 0, then visit vertex 3, and finally vertex 1. The traversal is 0 → 2 → 4 → 3 → 1.

BFS: Start from vertex 0. Visit vertices 2, 3, and 1 (in the order they appear in the adjacency list). Then, visit vertex 4 from vertex 2. The traversal is 0 → 2 → 3 → 1 → 4.

### Example 2

Input: V = 4, edges = [ [0, 1], [0, 3], [1, 2] ]

Output: [0, 1, 2, 3], [0, 1, 3, 2]

Explanation:

DFS: Start from vertex 0. Visit vertex 1, then vertex 2, backtrack to vertex 0, then visit vertex 3. The traversal is 0 → 1 → 2 → 3.

BFS: Start from vertex 0. Visit vertices 1 and 3, then visit vertex 2 from vertex 1. The traversal is 0 → 1 → 3 → 2.

### Constraints

- E= Number of Edges
- 1 ≤ V, E ≤ 10^4

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/plus?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
