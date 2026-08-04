# [Number of provinces](https://takeuforward.org/plus/dsa/problems/number-of-provinces?subject=dsa&approach=recursion&sidebar=open&tab=submissions)

![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-eab308?style=for-the-badge)

---

## 📝 Problem Statement

Given an undirected graph with V vertices. Two vertices u and v belong to a single province if there is a path from u to v or v to u. Find the number of **provinces** . The graph is given as an n x n matrix adj where adj[i][j] = 1 if the ith city and the jth city are directly connected, and adj[i][j] = 0 otherwise.

A province is a group of directly or indirectly connected cities and no other cities outside of the group.

### Example 1

<img src="https://static.takeuforward.org/content/ProblemSetter-WdAmb0xn">

<p>

**Input:** adj=[ [1, 0, 0, 1], [0, 1, 1, 0], [0, 1, 1, 0], [1, 0, 0, 1] ]</p><p>

**Output:** 2</p><p>

**Explanation:** In this graph, there are two provinces: [1, 4] and [2, 3]. City 1 and city 4 have a path between them, and city 2 and city 3 also have a path between them. There is no path between any city in province 1 and any city in province 2.</p>

### Example 2

<p>

**Input:** adj= [ [1, 0, 1], [0, 1, 0], [1, 0, 1] ]</p><p>

**Output:** 2</p><p>

**Explanation:** The graph clearly has 2 Provinces [1,3] and [2]. As city 1 and city 3 has a path between them they belong to a single province. City 2 has no path to city 1 or city 3 hence it belongs to another province.</p>

### Example 3

Input: adj= [ [1, 1], [1, 1] ]

Output:

1

### Constraints

- &nbsp;&nbsp;1 <= V <= 300
- &nbsp;&nbsp;V == adj.length
- &nbsp;&nbsp;V == adj[i].length
- &nbsp;&nbsp;adj[i][j] is 1 or 0.
- &nbsp;&nbsp;adj[i][i] == 1
- &nbsp;&nbsp;a[i][j] == adj[j][i]

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/plus?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
