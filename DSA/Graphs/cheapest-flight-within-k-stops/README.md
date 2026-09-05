# [Cheapest flight within K stops](https://takeuforward.org/plus/dsa/problems/cheapest-flight-within-k-stops?source=strivers-a2z-dsa-track&tab=submissions)

![Difficulty: Hard](https://img.shields.io/badge/Difficulty-Hard-ef4444?style=for-the-badge)

---

## 📝 Problem Statement

There are n cities and m edges connected by some number of flights. Given an array of flights where flights[i] = [ from_i, to_i, price_i] indicates that there is a flight from city from_i to city to_i with cost price_i. Given three integers src, dst, and k, and return the **cheapest price** from src to dst with at most **k** stops. If there is no such route, return -1.

### Example 1

<img src="https://static.takeuforward.org/content/ProblemSetter-lTPXKKMA" data-porda-id="p_c39186b3-9d5c-4b1a-a6d9-00a0e1c76f96" data-porda-status="clean" class="porda-blur-img" data-porda-unblur="1">

<p>

**Input:** n = 4, flights = [[0,1,100],[1,2,100],[2,0,100],[1,3,600],[2,3,200]], src = 0, dst = 3, k = 1</p><p>

**Output:** 700</p><p>

**Explanation:** The optimal path with at most 1 stops from city 0 to 3 is marked in red and has cost 100 + 600 = 700.</p>Note that the path through cities [0,1,2,3] is cheaper but is invalid because it uses 2 stops.

### Example 2

<img src="https://static.takeuforward.org/content/ProblemSetter-CIPwuM01" data-porda-id="p_ad3a9de0-8007-4f68-b780-36c1fd02ab4a" data-porda-status="clean" class="porda-blur-img" data-porda-unblur="1">

<p>

**Input:** n = 3, flights = [[0,1,100],[1,2,100],[0,2,500]], src = 0, dst = 2, k = 1</p><p>

**Output:** 200</p><p>

**Explanation:** The optimal path with at most 1 stops from city 0 to 2 is marked in red and has cost 100 + 100 = 200.</p>

### Constraints

- &nbsp;&nbsp;1 <= n <= 100
- &nbsp;&nbsp;0 <= flights.length <= (n * (n - 1) / 2)
- &nbsp;&nbsp;&nbsp;flights[i].length == 3
- &nbsp;&nbsp;0 <= from_i, to_i < n
- &nbsp;&nbsp;from_i != to_i
- &nbsp;&nbsp;1 <= price_i <= 10^4
- &nbsp;&nbsp;There will not be any multiple flights between the two cities.
- &nbsp;&nbsp;0 <= src, dst, k < n

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/plus?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
