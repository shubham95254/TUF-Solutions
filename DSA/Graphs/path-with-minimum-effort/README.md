# [Path with minimum effort](https://takeuforward.org/plus/dsa/problems/path-with-minimum-effort?source=strivers-a2z-dsa-track&tab=submissions)

![Difficulty: Hard](https://img.shields.io/badge/Difficulty-Hard-ef4444?style=for-the-badge)

---

## 📝 Problem Statement

A hiker is preparing for an upcoming hike. Given heights, a 2D array of size rows x columns, where heights[row][col] represents the height of the cell (row, col). The hiker is situated in the top-left cell, (0, 0), and hopes to travel to the bottom-right cell, (rows-1, columns-1) (i.e.,0-indexed). He can move up, down, left, or right. He wishes to find a route that requires the **minimum effort** .

A route's&nbsp;effort&nbsp;is the&nbsp;maximum absolute difference&nbsp;in heights between two consecutive cells of the route.

### Example 1

<p>

**Input:** heights = [[1,2,2],[3,8,2],[5,3,5]]</p><p>

**Output:** 2</p><p>

**Explanation:** The route of [1,3,5,3,5] has a maximum absolute difference of 2 in consecutive cells. This is better than the route of [1,2,2,2,5], where the maximum absolute difference is 3.</p>

### Example 2

<p>

**Input:** heights = [[1,2,3],[3,8,4],[5,3,5]]</p><p>

**Output:** 1</p><p>

**Explanation:** The route of [1,2,3,4,5] has a maximum absolute difference of 1 in consecutive cells, which is better than route [1,3,5,3,5].</p>

### Constraints

- rows == heights.length
- columns == heights[i].length
- 1 <= rows, columns <= 100
- 1 <= heights[i][j] <= 10^6

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/plus?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
