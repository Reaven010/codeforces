# A. Bit++

## Problem Statement

The Bit++ programming language has only one variable, **`X`**, which is initially set to **0**.

A program consists of several statements. Each statement performs one of the following operations:

* `++` → Increase `X` by **1**
* `--` → Decrease `X` by **1**

The variable `X` may appear before or after the operation, so all of the following are valid statements:

* `++X`
* `X++`
* `--X`
* `X--`

Your task is to execute all the statements in order and determine the final value of `X`.

---

## Input Format

* The first line contains an integer **`n`** (`1 ≤ n ≤ 150`) — the number of statements.
* The next **`n`** lines each contain one statement.

---

## Output Format

Print a single integer representing the final value of **`X`** after executing all the statements.

---

## Example

### Input

```text
1
++X
```

### Output

```text
1
```

---

## Explanation

* Initial value: `X = 0`
* Execute `++X` → `X = 1`

Final answer:

```text
1
```

---

## Constraints

* **Time Limit:** 1 second
* **Memory Limit:** 256 MB

---

## Approach

1. Initialize `X = 0`.
2. Read each statement.
3. If the statement contains `"++"`, increment `X`.
4. Otherwise, decrement `X`.
5. Print the final value of `X`.

---

## Complexity Analysis

* **Time Complexity:** `O(n)`
* **Space Complexity:** `O(1)`
