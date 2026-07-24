# A. Beautiful Matrix

## Problem Statement

You are given a **5 × 5 matrix** containing:

* **24 zeroes**
* Exactly **one `1`**

A matrix is considered **beautiful** when the `1` is located at the center of the matrix, which is:

* **3rd row**
* **3rd column**

In one move, you can perform either of the following operations:

1. Swap two neighboring rows.
2. Swap two neighboring columns.

Your task is to determine the **minimum number of moves** required to move the `1` to the center of the matrix.

---

## Input Format

The input consists of **5 lines**.

Each line contains **5 integers** representing the elements of the matrix.

It is guaranteed that the matrix contains exactly **24 zeroes and one `1`**.

---

## Output Format

Print a single integer representing the **minimum number of moves** required to make the matrix beautiful.

---

## Example

### Input

```text
0 0 0 0 0
0 0 0 0 1
0 0 0 0 0
0 0 0 0 0
0 0 0 0 0
```

### Output

```text
3
```

---

## Explanation

The `1` is located at:

```text
Row = 2
Column = 5
```

The center of the matrix is:

```text
Row = 3
Column = 3
```

To reach the center:

* Move **1 row** down.
* Move **2 columns** left.

Therefore:

```text
1 + 2 = 3
```

So the minimum number of moves is:

```text
3
```

---

## Approach

1. Read all elements of the **5 × 5 matrix**.
2. Find the position `(row, column)` where the value is `1`.
3. The target position is `(3, 3)`.
4. Calculate the number of row moves required.
5. Calculate the number of column moves required.
6. Add both values to get the minimum number of moves.

Using 1-based indexing, the answer can be calculated as:

```text
|row - 3| + |column - 3|
```

This is the **Manhattan distance** between the current position of `1` and the center.

---

## Complexity Analysis

Since the matrix always contains exactly **25 elements**:

* **Time Complexity:** `O(25)`, effectively `O(1)`
* **Space Complexity:** `O(1)`

---

## Constraints

* Matrix size: `5 × 5`
* Exactly one element is `1`.
* All other elements are `0`.
* **Time Limit:** 2 seconds
* **Memory Limit:** 256 MB
