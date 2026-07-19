# A. Team

> **Codeforces Round:** Beta Round #4  
> **Problem:** 231A - Team  
> **Difficulty:** 800  
> **Tags:** Constructive Algorithms, Brute Force

---

## 📖 Problem Statement

Three friends — **Petya**, **Vasya**, and **Tonya** — are participating in a programming contest.

For each problem, each friend indicates whether they are **sure (1)** or **not sure (0)** about the solution.

The team will solve a problem **only if at least two of the three friends are sure** about it.

Given the opinions for all problems, determine how many problems the team will solve.

---

## Examples

### Example 1

**Input**
```text
3
1 1 0
1 1 1
1 0 0
```

**Output**
```text
2
```

### Example 2

**Input**
```text
2
1 0 0
0 1 1
```

**Output**
```text
1
```

---

## Constraints

- `1 ≤ n ≤ 1000`
- Each value is either `0` or `1`
- Time Limit: **2 seconds**
- Memory Limit: **256 MB**

---

## 💡 Approach

For each problem:

1. Read the three integers representing the confidence of Petya, Vasya, and Tonya.
2. Compute their sum.
3. If the sum is **greater than or equal to 2**, increment the answer.
4. After processing all problems, print the total count.

---

## 🏷️ Tags

- Brute Force
- Implementation
- Constructive Algorithms

---

## 🔗 Problem Link

https://codeforces.com/problemset/problem/231/A

---

**Status:** ✅ Accepted