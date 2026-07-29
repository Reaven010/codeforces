# A. Helpful Maths

## Problem Statement

Xenia, a beginner mathematician, is a third-year student at elementary school. She is currently learning the addition operation.

The teacher has written down the sum of multiple numbers. The pupils are supposed to calculate the sum. To make the calculation easier, the sum contains only the numbers **1**, **2**, and **3**.

However, this is still not easy enough for Xenia. She can only calculate a sum if the numbers appear in **non-decreasing order**. For example:

* She **cannot** calculate: `1+3+2+1`
* She **can** calculate:

  * `1+1+2`
  * `3+3`

You are given the sum exactly as it appears on the board. Rearrange the numbers so that they appear in **non-decreasing order** and print the new sum.

---

## Input Format

The first line contains a non-empty string **`s`** representing the sum.

The string:

* Contains no spaces.
* Consists only of the digits `1`, `2`, `3` and the `'+'` character.
* Represents a valid sum.
* Has a maximum length of **100** characters.

---

## Output Format

Print the rearranged sum so that the numbers appear in **non-decreasing order**.

---

## Example

### Input

```text
3+2+1
```

### Output

```text
1+2+3
```

---

## Explanation

The original sum is:

```text
3+2+1
```

After sorting the numbers in non-decreasing order, it becomes:

```text
1+2+3
```

This is the format that Xenia can calculate.

---

## Approach

1. Read the input string.
2. Extract all the digits (`1`, `2`, and `3`), ignoring the `'+'` characters.
3. Store the digits in a container (such as a vector or string).
4. Sort the digits in ascending order.
5. Print the sorted digits separated by `'+'`.

---

## Complexity Analysis

Let `n` be the length of the input string.

* **Time Complexity:** `O(n log n)` (due to sorting)
* **Space Complexity:** `O(n)`

---

## Constraints

* `1 ≤ |s| ≤ 100`
* `s` contains only the characters `1`, `2`, `3`, and `'+'`.
* `s` is guaranteed to represent a valid sum.
* **Time Limit:** 2 seconds
* **Memory Limit:** 256 MB
