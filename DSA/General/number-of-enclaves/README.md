# [Number of enclaves](https://takeuforward.org/plus/dsa/problems/number-of-enclaves?source=strivers-a2z-dsa-track&tab=submissions)

![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-eab308?style=for-the-badge)

---

## 📝 Problem Statement

Given an N x M binary matrix grid, where 0 represents a sea cell and 1 represents a land cell. A move consists of walking from one land cell to another adjacent **(4-directionally)** land cell or walking off the boundary of the grid. Find the number of **land cells** in the grid for which we cannot walk off the boundary of the grid in any number of moves.

### Example 1

<img src="https://static.takeuforward.org/content/ProblemSetter-BX7diqs5">

<p>

**Input:** grid = [[0, 0, 0, 0], [1, 0, 1, 0], [0, 1, 1, 0], [0, 0, 0, 0]]</p><p>

**Output:** 3</p><p>

**Explanation:** </p><img src="https://static.takeuforward.org/content/ProblemSetter-4DMweAfF">

The highlighted cells represents the land cells.

### Example 2

<img src="https://static.takeuforward.org/content/ProblemSetter-JKtYrVqX">

<p>

**Input:** grid = [[0, 0, 0, 1],[0, 0, 0, 1], [0, 1, 1, 0], [0, 0, 1, 0], [0, 0, 0, 0]]</p><p>

**Output:** 3</p><p>

**Explanation:** </p><img src="https://static.takeuforward.org/content/ProblemSetter-zgfKADbg">

The highlighted cells represents the land cells.

### Example 3

Input: grid = [[0, 0, 0, 1], [0, 1, 1, 0], [0, 1, 1, 0], [0, 0, 0, 0]]

Output:

4

### Constraints

- &nbsp;&nbsp;1 <= N, M <= 500
- &nbsp;&nbsp;grid[i][j] == 0 or 1

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/plus?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
