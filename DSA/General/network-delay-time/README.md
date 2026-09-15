# [Network Delay Time](https://takeuforward.org/plus/dsa/problems/network-delay-time?source=strivers-a2z-dsa-track&tab=submissions)

![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-eab308?style=for-the-badge)

---

## 📝 Problem Statement

You are given a directed weighted graph representing a communication network with n nodes, numbered from 1 … n.

The graph is provided as an edge list times, where each record is of the form (ui, vi, wi) where,

- ui — the source node of the directed edge
- vi — the target node of the directed edge
- wi — the time it takes for a signal to travel from ui to vi (non-negative and integer)

A single signal is injected at node k at time 0.

The signal propagates 1-way along the directed edges; whenever it reaches a node, that node immediately retransmits the signal to all of its outgoing neighbors, each traversal taking exactly the edge’s weight wi units of time.

Return the minimum time required for every node in the network to receive the signal.

If some node is unreachable, return -1.

### Example 1

<p>

**Input:** times = [[2,1,1],[2,3,1],[3,4,1]],&nbsp;n = 4,&nbsp;k = 2</p><p>

**Output:** 2</p><p>

**Explanation:** </p>&nbsp;2 →1 (1 unit)&nbsp;&nbsp;2 →3 (1 unit) →4 ( +1 unit )

&nbsp;The last node (4) gets the signal at time 2.

### Example 2

<p>

**Input:** &nbsp;times = [[1,2,1]], n = 2,&nbsp;k = 1</p><p>

**Output:** 1</p><p>

**Explanation:** </p>
- &nbsp;Direct edge 1 → 2 delivers the signal in 1 unit of time.

### Constraints

- 1 <= k <= n <= 100
- 1 <= times.length <= 6000
- times[i].length == 3
- 1 <= ui, vi <= n, with ui != vi
- 0 <= wi <= 100
- Every ordered pair (ui, vi) appears at most once in times (no parallel edges).

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/plus?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
