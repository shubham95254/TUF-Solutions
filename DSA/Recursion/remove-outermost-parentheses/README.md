# [Remove Outermost Parentheses](https://takeuforward.org/plus/dsa/problems/remove-outermost-parentheses?source=strivers-a2z-dsa-track&tab=submissions)

![Difficulty: Medium](https://img.shields.io/badge/Difficulty-Medium-eab308?style=for-the-badge)

---

## 📝 Problem Statement

A valid parentheses string is defined by the following rules:

- It is the **empty** string "".
- If A is a valid parentheses string, then so is **"(" + A + ")"** .
- If A and B are valid parentheses strings, then **A + B** is also valid.

A primitive valid parentheses string is a non-empty valid string that **cannot be split into two or more** non-empty valid parentheses strings.

Given a **valid parentheses string s,** consider its primitive decomposition: **s = P** _ **1** **+ P** _ **2** **+ ... + P** _ **k** , where **P** _ **i** are **primitive** **valid parentheses strings.**

*Return* **s** *after removing the outermost parentheses of every primitive string in the* **primitive decomposition of s** *.*

### Example 1

<p>

**Input:** s = "((()))"</p><p>

**Output:** "(())"</p><p>

**Explanation:** </p>The input string is a single primitive: "((()))".

Removing the outermost layer yields: "(())".

### Example 2

<p>

**Input:** s = "()(()())(())"</p><p>

**Output:** "()()()"</p><p>

**Explanation:** </p>Primitive decomposition: "()" + "(()())" + "(())"

After removing outermost parentheses: "" + "()()" + "()"

Final result: "()()()".

### Constraints

- 1 <= s.length <= 10⁵
- s[i] is either '(' or ')'
- s is a valid parentheses string

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/plus?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
