# [Minimum multiplications to reach end](https://takeuforward.org/plus/dsa/problems/minimum-multiplications-to-reach-end?source=strivers-a2z-dsa-track&tab=submissions)

![Difficulty: Hard](https://img.shields.io/badge/Difficulty-Hard-ef4444?style=for-the-badge)

---

## 📝 Problem Statement

Given start, end, and an array arr of n numbers. At each step, the start is multiplied by any number in the array and then a mod operation with 100000 is done to get the new start.

Find the **minimum steps** in which the end can be achieved starting from the start. If it is not possible to reach the end, then return -1.

### Example 1

<p>

**Input:** arr = [2, 5, 7], start = 3, end = 30</p><p>

**Output:** 2</p><p>

**Explanation:** </p>Step 1: 3*2 = 6 % 100000 = 6&nbsp;

Step 2: 6*5 = 30 % 100000 = 30

Therefore, in minimum 2 multiplications, we reach the&nbsp;end number which is treated as a destination&nbsp;node of a graph here.

### Example 2

<p>

**Input:** arr = [3, 4, 65], start = 7, end = 66175</p><p>

**Output:** 4</p><p>

**Explanation:** </p>Step 1: 7*3 = 21 % 100000 = 21&nbsp;

Step 2: 21*3 = 63 % 100000 = 63&nbsp;

Step 3: 63*65 = 4095 % 100000 = 4095&nbsp;

Step 4: 4095*65 = 266175 % 100000 = 66175

Therefore, in minimum 4 multiplications we reach the end number which is treated as a destination node of a graph here.

### Constraints

- &nbsp;&nbsp;1 <= n <= 10^4
- &nbsp;&nbsp;1 <= arr[i] <= 10^4
- &nbsp;&nbsp;1 <= start, end < 10^5

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/plus?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
