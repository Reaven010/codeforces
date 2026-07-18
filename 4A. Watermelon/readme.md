# A. Watermelon

> **Codeforces Round:** Beta Round #4  
> **Problem:** 4A - Watermelon  
> **Difficulty:** 800  
> **Tags:** Constructive Algorithms

---

## 📖 Problem Statement

Pete and Billy bought a watermelon weighing **w** kilograms. They want to divide it into **two positive parts**, where **both parts have even weights**. The two parts do **not** have to be equal.

Determine whether such a division is possible.

---

## Examples

### Example 1

**Input**
```text
8
```

**Output**
```text
YES
```

### Example 2

**Input**
```text
2
```

**Output**
```text
NO
```

---

## Constraints

- `1 ≤ w ≤ 100`
- Time Limit: **1 second**
- Memory Limit: **64 MB**

---

## 💡 Approach

A watermelon can be divided into two **positive even integers** only if:

- The total weight is **even**.
- The weight is **greater than 2**.

Reason:

- `2` → `1 + 1` ❌ (both odd)
- `4` → `2 + 2` ✅
- `6` → `2 + 4` ✅
- `8` → `4 + 4` or `2 + 6` ✅

Therefore, the answer is **YES** only when:

```cpp
w % 2 == 0 && w > 2
```

---

## ✅ Solution

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int w;
    cin >> w;

    if (w % 2 == 0 && w > 2)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
```

---

## ⏱ Complexity Analysis

| Operation | Complexity |
|-----------|------------|
| Time | **O(1)** |
| Space | **O(1)** |

---

## 🧠 Key Observation

Every even number greater than **2** can be written as the sum of two positive even numbers.

Examples:

- `4 = 2 + 2`
- `6 = 2 + 4`
- `8 = 2 + 6`
- `10 = 4 + 6`

The only even number that **cannot** be divided into two positive even parts is **2**.

---

## 🏷️ Tags

- Constructive Algorithms
- Math
- Implementation

---

## 🔗 Problem Link

https://codeforces.com/problemset/problem/4/A

---

**Status:** ✅ Accepted