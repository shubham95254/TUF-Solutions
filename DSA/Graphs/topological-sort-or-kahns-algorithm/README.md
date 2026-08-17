# [Topological sort or Kahn's algorithm](https://takeuforward.org/plus/dsa/problems/topological-sort-or-kahns-algorithm?source=strivers-a2z-dsa-track&tab=submissions)

![Difficulty: Hard](https://img.shields.io/badge/Difficulty-Hard-ef4444?style=for-the-badge)

---

## 📝 Problem Statement

Given a Directed Acyclic Graph (DAG) with V vertices labeled from 0 to V-1.The graph is represented using an adjacency list where adj[i] lists all nodes connected to node. Find any **Topological** Sorting of that Graph.

In topological sorting, node u will always appear before node v if there is a directed edge from node u towards node v(u -> v).

The function should **return** an **array** representing the topological order. The output will be validated by our driver code, which checks the correctness of your topological sort. It will print **True** if the order is valid, otherwise **False.**

### Example 1

<p>

**Input:** V = 6,adj=[ [ ], [ ], [3], [1], [0,1], [0,2] ]</p>

<img src="https://static.takeuforward.org/content/ProblemSetter-YmZlLBfA">

<p>

**Output:** [5, 4, 2, 3, 1, 0]</p><p>

**Explanation:** A graph may have multiple topological sortings.&nbsp;</p>
- Node 5 must appear before 0 and 2
- Node 2 must appear before 3
- Node 3 must appear before 1
- Node 4 must appear before 0 and 1

**One valid topological order is: [5, 4, 2, 3, 1, 0]**

### Example 2

<p>

**Input:** V = 4, adj=[ [ ], [0], [0], [0] ]</p>

<img src="https://static.takeuforward.org/content/ProblemSetter-ZqsXEYq1">

<p>

**Output:** [3, 2, 1, 0]</p><p>

**Explanation:** The necessary conditions for the ordering are:</p>
- Nodes 1, 2, and 3 must all appear before 0.
- Their internal order doesn’t matter.

**One valid topological order is: [3, 2, 1, 0]**

### Constraints

- 1 ≤ V ≤ 10⁴
- 0 ≤ number of edges ≤ 10⁴

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/plus?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
