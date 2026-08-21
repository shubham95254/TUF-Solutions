# [Floyd warshall algorithm](https://takeuforward.org/plus/dsa/problems/floyd-warshall-algorithm?source=strivers-sde-sheet&tab=submissions)

![Difficulty: Hard](https://img.shields.io/badge/Difficulty-Hard-ef4444?style=for-the-badge)

---

## 📝 Problem Statement

Given a graph of V vertices numbered from 0 to V-1. Find the **shortest distances** between every pair of vertices in a given edge-weighted directed graph. The graph is represented as an adjacency matrix of size n x n. Matrix[i][j] denotes the weight of the edge from i to j. If matrix[i][j]=-1, it means there is no edge from i to j.

### Example 1

<p>

**Input:** matrix = [[0, 2, -1, -1],[1, 0, 3, -1],[-1, -1, 0, 1],[3, 5, 4, 0]]</p><p>

**Output:** [[0, 2, 5, 6], [1, 0, 3, 4], [4, 6, 0, 1], [3, 5, 4, 0]]&nbsp;</p><p>

**Explanation:** matrix[0][0] is storing the distance from vertex 0 to vertex 0, the distance from vertex 0 to vertex 1 is 2 and so on.</p>

### Example 2

<p>

**Input:** matrix = [[0,25],[-1,0]]</p><p>

**Output:** [[0, 25],[-1, 0]]</p><p>

**Explanation:** The matrix already contains the shortest distance.</p>

### Constraints

- 1 <= n <= 100
- -1 <= matrix[ i ][ j ] <= 1000

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/plus?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
