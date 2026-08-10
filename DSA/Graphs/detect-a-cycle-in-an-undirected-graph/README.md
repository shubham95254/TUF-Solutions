# [Detect a cycle in an undirected graph](https://takeuforward.org/plus/dsa/problems/detect-a-cycle-in-an-undirected-graph?source=strivers-a2z-dsa-track&tab=submissions)

![Difficulty: Hard](https://img.shields.io/badge/Difficulty-Hard-ef4444?style=for-the-badge)

---

## 📝 Problem Statement

Given an undirected graph with V vertices labeled from 0 to V-1.&nbsp;The graph is represented using an adjacency list where adj[i] lists all nodes connected to node. Determine if the graph contains any **cycles** .

**Note:** The graph does not contain any self-edges (edges where a vertex is connected to itself).

### Example 1

<img src="https://static.takeuforward.org/content/ProblemSetter-Eymk2V2R">

<p>

**Input:** &nbsp;V = 6, adj= [[1, 3], [0, 2, 4], [1, 5], [0, 4], [1, 3, 5], [2, 4]]</p><p>

**Output:** True</p><p>

**Explanation:** The graph contains a cycle: 0 ->1 -> 2 -> 5 -> 4 -> 1.</p>

### Example 2

<img src="https://static.takeuforward.org/content/ProblemSetter-ddy9fw2d">

<p>

**Input:** &nbsp;V = 4, adj= [[1, 2], [0], [0, 3], [2]]</p><p>

**Output:** False</p><p>

**Explanation:** The graph does not contain any cycles.</p>

### Constraints

- E=number of edges
- 1 ≤ V, E ≤ 10<sup style="color: var(--text-color); background-color: var(--background);">4</sup>

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/plus?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
