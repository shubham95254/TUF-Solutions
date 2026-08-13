# [Word ladder I](https://takeuforward.org/plus/dsa/problems/word-ladder-i?source=strivers-a2z-dsa-track&tab=submissions)

![Difficulty: Hard](https://img.shields.io/badge/Difficulty-Hard-ef4444?style=for-the-badge)

---

## 📝 Problem Statement

Given are the two distinct words startWord and targetWord, and a list of size N, denoting wordList of **unique words** of equal size M. Find the length of the shortest transformation sequence from startWord to targetWord.

Keep the following conditions in mind:

- A word can only consist of lowercase characters.
- Only one letter can be changed in each transformation.
- Each transformed word must exist in the wordList including the targetWord.
- startWord may or may not be part of the wordList

**Note:** &nbsp;If there’s no possible way to transform the sequence from startWord to targetWord return 0.

### Example 1

<p>

**Input:** wordList = ["des","der","dfr","dgt","dfs"], startWord = "der", targetWord = "dfs"</p><p>

**Output:** 3</p><p>

**Explanation:** &nbsp;</p>
- The length of the smallest transformation sequence from "der" to&nbsp;"dfs" is 3
- i.e. "der" -> (replace ‘e’ by ‘f’) -> "dfr" -> (replace ‘r’ by ‘s’)&nbsp;-> "dfs".
- So, it takes 3 different strings for us to reach the targetWord. Each of these strings are present in the wordList.

### Example 2

<p>

**Input:** wordList = ["geek", "gefk"], startWord = "gedk", targetWord= "geek"</p><p>

**Output:** 2</p><p>

**Explanation:** &nbsp;</p>
- The length of the smallest transformation sequence&nbsp;from "gedk" to "geek" is 2
- i.e. "gedk" -> (replace ‘d’ by ‘e’) -> "geek"&nbsp;.
- So, it takes 2 different strings for us to reach the targetWord.&nbsp;Each of these strings are present in the wordList.

### Example 3

<p>

**Input:** wordList = ["hot", "dot", "dog", "lot", "log"], startWord = "hit", targetWord = "cog"</p>Output:

0

### Constraints

- 1 ≤ wordList.length ≤ 100
- 1 ≤ wordList[i].length ≤ 10
- startWord.length == targetWord.length == wordList[i].length
- startWord, targetWord, and wordList[i] consist of lowercase English letters.
- startWord!= targetWord

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/plus?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
