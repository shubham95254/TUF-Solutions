# [Number of ways to arrive at destination](https://takeuforward.org/plus/dsa/problems/number-of-ways-to-arrive-at-destination?source=strivers-a2z-dsa-track&tab=submissions)

![Difficulty: Hard](https://img.shields.io/badge/Difficulty-Hard-ef4444?style=for-the-badge)

---

## 📝 Problem Statement

A city consists of n intersections numbered from 0 to n - 1 with bi-directional roads between some intersections. The inputs are generated such that one can reach any intersection from any other intersection and that there is at most one road between any two intersections.

Given an integer n and a 2D integer array ‘roads’ where roads[i] = [u_i, v_i, time_i] means that there is a road between intersections u_i and v_i that takes time_i minutes to travel. Determine the **number of ways** to travel from intersection 0 to intersection n - 1 in the shortest amount of time.

Since the answer may be large, return it modulo 10^9 + 7.

### Example 1

<img src="https://static.takeuforward.org/content/ProblemSetter-n4bXXNh5" data-porda-id="p_01df4caf-449a-4204-aa86-6319510f7a00" data-porda-status="timeout" class="porda-blur-img" data-porda-unblur="1">

<p>

**Input:** n=7, m=10, roads= [[0,6,7],[0,1,2],[1,2,3],[1,3,3],[6,3,3],[3,5,1],[6,5,1],[2,5,1],[0,4,5],[4,6,2]]</p><p>

**Output:** 4</p><p>

**Explanation:** </p>The four ways to get there in 7 minutes (which is the shortest calculated time) are:

- 0&nbsp;6

- 0&nbsp;4&nbsp;6

- 0&nbsp;1&nbsp;2&nbsp;5&nbsp;6

- 0&nbsp;1&nbsp;3&nbsp;5&nbsp;6

### Example 2

<img src="https://static.takeuforward.org/content/ProblemSetter-vh3sQIWk" data-porda-id="p_b45079bd-6c42-45ba-8f6e-b9555a6572f8" data-porda-status="timeout" class="porda-blur-img" data-porda-unblur="1">

<p>

**Input:** n=6, m=8, roads= [[0,5,8],[0,2,2],[0,1,1],[1,3,3],[1,2,3],[2,5,6],[3,4,2],[4,5,2]]</p><p>

**Output:** 3</p><p>

**Explanation:** </p>The three ways to get there in 8 minutes (which is the shortest calculated time) are:

- 0&nbsp;5

- 0&nbsp;2&nbsp;5

- 0&nbsp;1&nbsp;3&nbsp;4&nbsp;5

### Constraints

- 1 <= n <= 200
- n - 1 <= roads.length <= n * (n - 1) / 2
- roads[i].length == 3
- 0 <= u_i, v_i <= n - 1
- 1 <= time_i <= 10^9
- u_i != v_i

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/plus?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
