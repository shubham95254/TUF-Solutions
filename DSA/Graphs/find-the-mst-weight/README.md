# [Find the MST weight](https://takeuforward.org/plus/dsa/problems/find-the-mst-weight?source=strivers-a2z-dsa-track&tab=submissions)

![Difficulty: Hard](https://img.shields.io/badge/Difficulty-Hard-ef4444?style=for-the-badge)

---

## 📝 Problem Statement

You are given a **weighted** , **undirected** , and **connected** graph with **V** vertices numbered from **0 to V-1** .

The graph is provided in the form of an **adjacency list,** where each entry **adj[u]** contains a list of pairs **[v, w],** representing an edge between vertex **u** and vertex **v** with weight **w** .

Find the **sum** of the weights of the edges in the **Minimum Spanning Tree (MST)** of the graph.&nbsp;

A minimum spanning tree (MST) or minimum weight spanning tree is a subset of the edges of a connected, edge-weighted undirected graph that connects all the vertices together, without any cycles and with the minimum possible total edge weight.

**Note** : The input to the function in code editor is giving in form of adjacency list.

### Example 1

<img src="https://static.takeuforward.org/content/ProblemSetter-VMx0t_X_">

<p>

**Input:** V = 4, adj = [[[1, 1], [3, 4]],&nbsp;[[0, 1], [2, 2]],&nbsp;[[1, 2], [3, 3]],&nbsp;[[0, 4], [2, 3]]]</p><p>

**Output:** 6</p><p>

**Explanation:** </p>Edges included in the MST:

- From node 0 → [1, 1] (weight 1)
- From node 1 → [2, 2] (weight 2)
- From node 2 → [3, 3] (weight 3)

The total MST weight is 1 + 2 + 3 = 6.

These edges connect all vertices (0, 1, 2, 3) with minimum cost.

### Example 2

<img src="https://static.takeuforward.org/content/ProblemSetter-TRzOGiy0">

<p>

**Input:** V = 3, adj = [[[1, 5], [2, 15]],&nbsp;[[0, 5], [2, 10]],&nbsp;[[0, 15], [1, 10]]]</p><p>

**Output:** 15</p><p>

**Explanation:** </p>Edges included in the MST:

- From node 0 → [1, 5] (weight 5)
- From node 1 → [2, 10] (weight 10)

The total weight of the MST is 5+10 = 15

### Constraints

- 2 ≤ V ≤ 10^3
- V-1 ≤ E ≤ 10^4
- 1 ≤ w ≤ 10^5

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/plus?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
