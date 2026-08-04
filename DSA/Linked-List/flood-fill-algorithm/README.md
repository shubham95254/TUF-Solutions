# [Flood fill algorithm](https://takeuforward.org/plus/dsa/problems/flood-fill-algorithm?subject=dsa&category=graph&subcategory=traversal-problems&approach=recursion&tab=submissions)

![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-eab308?style=for-the-badge)

---

## 📝 Problem Statement

An **image** is represented by a 2-D array of integers, each integer representing the pixel value of the image. Given a coordinate (sr, sc) representing the starting pixel (row and column) of the flood fill, and a pixel value newColor, "flood fill" the image.

To perform a **flood fill** , consider the starting pixel, plus any pixels connected 4-directionally to the starting pixel of the same colour as the starting pixel, plus any pixels connected 4-directionally to those pixels (also with the same colour as the starting pixel), and so on. Replace the colour of all of the aforementioned pixels with the newColor.

### Example 1

<img src="https://static.takeuforward.org/content/ProblemSetter-1vytgU1a">

<p>

**Input:** image = [ [1, 1, 1], [1, 1, 0], [1, 0, 1] ], sr = 1, sc = 1, newColor = 2</p><p>

**Output:** [ [2, 2, 2], [2, 2, 0], [2, 0, 1] ]</p><p>

**Explanation:** From the center of the image with position (sr, sc) = (1, 1) (i.e., the red pixel), all pixels connected by a path of the same color as the starting pixel (i.e., the blue pixels) are colored with the new color.</p>Note the bottom corner is not colored 2, because it is not 4-directionally connected to the starting pixel.

### Example 2

<p>

**Input:** image = [ [0, 1, 0], [1, 1, 0], [0, 0, 1] ], sr = 2, sc = 2, newColor = 3</p><p>

**Output:** [ [0, 1, 0], [1, 1, 0], [0, 0, 3] ]</p><p>

**Explanation:** Starting from the pixel at position (2, 2) (i.e., the blue pixel), we flood fill all adjacent pixels that have the same color as the starting pixel. In this case, only the pixel at position (2, 2) itself is of the same color. So, only that pixel gets colored with the new color, resulting in the updated image.</p>

### Constraints

·&nbsp;&nbsp;n == image.length

·&nbsp;&nbsp;m == image[i].length

·&nbsp;&nbsp;1 <= m, n <= 50

·&nbsp;&nbsp;0 <= image[i][j], color < 2^16

·&nbsp;&nbsp;0 <= sr < n

·&nbsp;&nbsp;0 <= sc < m

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/plus?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
