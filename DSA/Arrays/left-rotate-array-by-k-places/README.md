# [Left Rotate Array by K Places](https://takeuforward.org/plus/dsa/problems/left-rotate-array?source=strivers-a2z-dsa-track&tab=submissions&approach=optimal)

![Difficulty: Easy](https://img.shields.io/badge/Difficulty-Easy-22c55e?style=for-the-badge)

---

## 📝 Problem Statement

Given an integer array **nums** and a non-negative integer k, rotate the array to the left by k steps.

### Example 1

<p>

**Input:** nums = [1, 2, 3, 4, 5, 6], k = 2</p><p>

**Output:** nums = [3, 4, 5, 6, 1, 2]</p><p>

**Explanation:** </p>rotate 1 step to the left: [2, 3, 4, 5, 6, 1]

rotate 2 steps to the left: [3, 4, 5, 6, 1, 2]

### Example 2

<p>

**Input:** nums = [3, 4, 1, 5, 3, -5], k = 8</p><p>

**Output:** nums = [1, 5, 3, -5, 3, 4]</p><p>

**Explanation:** </p>rotate 1 step to the left: [4, 1, 5, 3, -5, 3]

rotate 2 steps to the left: [1, 5, 3, -5, 3, 4]

rotate 3 steps to the left: [5, 3, -5, 3, 4, 1]

rotate 4 steps to the left: [3, -5, 3, 4, 1, 5]

rotate 5 steps to the left: [-5, 3, 4, 1, 5, 3]

rotate 6 steps to the left: [3, 4, 1, 5, 3, -5]

rotate 7 steps to the left: [4, 1, 5, 3, -5, 3]

rotate 8 steps to the left: [1, 5, 3, -5, 3, 4]

### Constraints

- 1 <= nums.length <= 10^5
- -10^4 <= nums[i] <= 10^4
- 0 <= k <= 10^5

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/plus?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
