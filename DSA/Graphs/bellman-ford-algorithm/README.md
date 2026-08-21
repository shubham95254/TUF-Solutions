# [Bellman ford algorithm](https://takeuforward.org/plus/dsa/problems/bellman-ford-algorithm?source=strivers-sde-sheet&tab=submissions)

![Difficulty: Hard](https://img.shields.io/badge/Difficulty-Hard-ef4444?style=for-the-badge)

---

## 📝 Problem Statement

Given a weighted and directed graph of V vertices and E edges. An edge is represented as [ai, bi, wi], meaning there is a directed edge from a_i to b_i having weight w_i. Find the **shortest distance** of all the vertices from the source vertex S. If a vertex can't be reached from the S then mark the distance as 10^9.

If the graph contains a negative cycle then return -1 in a list.

### Example 1

<img src="https://static.takeuforward.org/content/ProblemSetter-B14DtTpA">

<p>

**Input:** V = 6, Edges = [[3, 2, 6], [5, 3, 1], [0, 1, 5], [1, 5, -3], [1, 2, -2], [3, 4, -2], [2, 4, 3]], S = 0</p><p>

**Output:** 0 5 3 3 1 2</p><p>

**Explanation:** </p>For node 1, shortest path is 0->1 (distance=5).

For node 2, shortest path is 0->1->2 (distance=3)

For node 3, shortest path is 0->1->5->3 (distance=3)

For node 4, shortest path is 0->1->5->3->4 (distance=1)

For node 5, shortest path is 0->1->5 (distance=2)

### Example 2

<p>

**Input:** V = 2, Edges = [[0,1,9]],&nbsp;S = 0</p><p>

**Output:** 0 9</p><p>

**Explanation:** For node 1, the shortest path is 0->1 (distance=9)</p>

### Constraints

- 1 ≤ V ≤ 500
- 1 ≤ E ≤ V*(V-1)
- -1000 ≤ edges[i][3] ≤ 1000
- 0 ≤ S < V

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/plus?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
