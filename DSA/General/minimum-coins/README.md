# [Minimum coins](https://takeuforward.org/plus/dsa/problems/minimum-coins?source=strivers-a2z-dsa-track&tab=submissions)

![Difficulty: Hard](https://img.shields.io/badge/Difficulty-Hard-ef4444?style=for-the-badge)

---

## 📝 Problem Statement

Given an integer array of coins representing coins of different denominations and an integer amount representing a total amount of money. Return the **fewest** number of coins that are needed to make up that amount. If that amount of money cannot be made up by any combination of the coins, return -1. There are **infinite** numbers of coins of each type

### Example 1

<p>

**Input:** coins = [1, 2, 5], amount = 11</p><p>

**Output:** 3</p><p>

**Explanation:** 11 = 5 + 5 + 1. We need 3 coins to make up the amount 11.</p>

### Example 2

<p>

**Input:** coins = [2, 5], amount = 3</p><p>

**Output:** -1</p><p>

**Explanation:** It's not possible to make amount 3 with coins 2 and 5. Since we can't combine the coin 2 and 5 to make the amount 3, the output is -1.</p>

### Constraints

- n=number of distinct denominations
- 1 <= n <= 100
- 1 <= coins[i], amount <= 10^3

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/plus?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
