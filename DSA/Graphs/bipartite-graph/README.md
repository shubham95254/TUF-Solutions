# [Bipartite graph](https://takeuforward.org/plus/dsa/problems/bipartite-graph?source=strivers-a2z-dsa-track&tab=submissions)

![Difficulty: Hard](https://img.shields.io/badge/Difficulty-Hard-ef4444?style=for-the-badge)

---

## 📝 Problem Statement

Given an undirected graph with V vertices labeled from 0 to V-1.&nbsp;The graph is represented using an 2D vector **edges** ,where edges[i] represent an undirected edge between edges[i][0] and edges[i][1]. Determine if the graph is **bipartite** or not.

A graph is bipartite if the nodes can be partitioned into two independent sets A and B such that every edge in the graph connects a node in set A and a node in set B.

### Example 1

<p>

**Input:** V=4, edges = [ [0, 1], [0, 3], [1, 2], [2, 3] ]</p><img src="https://static.takeuforward.org/content/ProblemSetter-qZ0gw2gd">

<p>

**Output:** True</p><p>

**Explanation:** The given graph is bipartite since, we can partition the nodes into two sets: {0, 2} and {1, 3}.</p>

### Example 2

<p>

**Input:** V=4, edges = [ [0, 1], [0, 2], [0, 3], [2, 1], [3, 2] ]</p><p>

**Output:** False</p><p>

**Explanation:** The graph is not bipartite. If we attempt to partition the nodes into two sets, we encounter an edge that connects two nodes within the same set, which violates the bipartite property.</p>

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
