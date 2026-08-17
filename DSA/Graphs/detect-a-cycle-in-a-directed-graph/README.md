# [Detect a cycle in a directed graph](https://takeuforward.org/plus/dsa/problems/detect-a-cycle-in-a-directed-graph?source=strivers-a2z-dsa-track&tab=submissions)

![Difficulty: Hard](https://img.shields.io/badge/Difficulty-Hard-ef4444?style=for-the-badge)

---

## 📝 Problem Statement

Given a **directed** graph with V vertices labeled from 0 to V-1. The graph is represented using an adjacency list where adj[i] lists all nodes connected to node. Determine if the graph contains any **cycles** .

### Example 1

Input:&nbsp;V = 6, adj= [ [1], [2, 5], [3], [4], [1], [ ] ]

<img src="https://static.takeuforward.org/content/ProblemSetter-Do8SOPHS">

Output: True

Explanation: The graph contains a cycle: 1 -> 2 -> 3 -> 4 -> 1.

### Example 2

Input:&nbsp;V = 4, adj= [[1,2], [2], [], [0,2]]

Output: False

Explanation: The graph does not contain a cycle.

### Example 3

Input:&nbsp;V = 3, adj= [[1], [2], [0]]

Output:

True

### Constraints

- 1 <= V <= 10^4
- adj.size() == V
- 0 <= adj[i][j] < V
- 1 <= sum(adj[i].size()) <= 10^4

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/plus?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
