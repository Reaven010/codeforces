# A. Domino Piling

## Problem Statement

You are given a rectangular board of size **`M × N`** and an unlimited number of standard dominoes, where each domino covers exactly **2 × 1** squares.

A domino may be placed either horizontally or vertically. Your goal is to place the **maximum possible number of dominoes** on the board while satisfying the following conditions:

1. Each domino covers exactly **two adjacent squares**.
2. No two dominoes overlap.
3. Every domino must lie completely inside the board.

Determine the maximum number of dominoes that can be placed.

---

## Input Format

A single line contains two integers:

* **`M`** — the number of rows.
* **`N`** — the number of columns.

### Constraints

* `1 ≤ M ≤ N ≤ 16`

---

## Output Format

Print a single integer representing the maximum number of dominoes that can be placed on the board.

---

## Example

### Input

```text
2 4
```

### Output

```text
4
```

---

## Explanation

The board contains:

```text
2 × 4 = 8 squares
```

Since each domino covers **2 squares**, the maximum number of dominoes that can fit is:

```text
8 / 2 = 4
```

A complete tiling is possible, so the answer is:

```text
4
```

---

## Constraints

* **Time Limit:** 2 seconds
* **Memory Limit:** 256 MB

---

## Approach

1. Calculate the total number of squares on the board:

   * `total = M × N`
2. Since each domino occupies exactly **2 squares**, the maximum number of dominoes is:

   * `total / 2` (integer division)
3. Print the result.

---

## Complexity Analysis

* **Time Complexity:** `O(1)`
* **Space Complexity:** `O(1)`
