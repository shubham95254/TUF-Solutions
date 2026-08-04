# [Number of islands](https://takeuforward.org/plus/dsa/problems/number-of-islands?subject=dsa&category=graph&subcategory=traversal-problems&approach=recursion&tab=submissions)

![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-eab308?style=for-the-badge)

---

## 📝 Problem Statement

Given a grid of size N x M (N is the number of rows and M is the number of columns in the grid) consisting of '0's (Water) and ‘1's(Land). Find the number of **islands** .

An island is surrounded by water and is formed by connecting adjacent lands horizontally or vertically or diagonally i.e., in all 8 directions.

### Example 1

<img src="https://static.takeuforward.org/content/ProblemSetter-cQJHsEaI">

<p>

**Input:** grid = [ ["1", "1", "1", "0", "1"], ["1", "0", "0", "0", "0"], ["1", "1", "1", "0", "1"], ["0", "0", "0", "1", "1"] ]</p><p>

**Output:** 2</p><p>

**Explanation:** This grid contains 2 islands. Each '1' represents a piece of land, and the islands are formed by connecting adjacent lands horizontally or vertically. Despite some islands having a common edge, they are considered separate islands because there is no land connectivity in any of the eight directions between them. Therefore, the grid contains 2 islands.</p>

### Example 2

<p>

**Input:** grid = [ ["1", "0", "0", "0", "1"], ["0", "1", "0", "1", "0"], ["0", "0", "1", "0", "0"], ["0", "1", "0", "1"," 0"] ]</p><p>

**Output:** 1</p><p>

**Explanation:** In the given grid, there's only one island as all the '1's are connected either horizontally, vertically, or diagonally, forming a single contiguous landmass surrounded by water on all sides.</p>

### Constraints

·&nbsp;&nbsp;N == grid.length

·&nbsp;&nbsp;M == grid[i].length

·&nbsp;&nbsp;1 <= N, M <= 300

·&nbsp;&nbsp;grid[i][j] is '0' or '1'.

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/plus?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
