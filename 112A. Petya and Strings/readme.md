# A. Petya and Strings

## Problem Statement

Petya is given two strings of the **same length**, consisting of uppercase and lowercase Latin letters.

He wants to compare the two strings **lexicographically** (dictionary order).

However, the comparison is **case-insensitive**, meaning:

* `'A'` is considered equal to `'a'`
* `'B'` is considered equal to `'b'`
* and so on.

Your task is to compare the two strings and determine their lexicographical order.

---

## Input Format

The input consists of two lines:

* The first line contains the first string.
* The second line contains the second string.

### Constraints

* `1 ≤ length of string ≤ 100`
* Both strings have the **same length**.
* Strings contain only uppercase and lowercase Latin letters.

---

## Output Format

Print:

* `-1` if the **first string is lexicographically smaller** than the second.
* `1` if the **first string is lexicographically greater** than the second.
* `0` if both strings are equal.

The comparison must ignore letter case.

---

## Example

### Input

```text
aaaa
aaaA
```

### Output

```text
0
```

---

## Explanation

After ignoring case:

```text
First string  = aaaa
Second string = aaaa
```

Both strings are identical.

Therefore, the answer is:

```text
0
```

---

## Approach

1. Read both strings.
2. Convert both strings to the same case, either:

   * lowercase, or
   * uppercase.
3. Compare the strings lexicographically.
4. If the first string is smaller, print `-1`.
5. If the first string is greater, print `1`.
6. Otherwise, print `0`.

Alternatively, you can compare the strings **character by character** after converting each character to lowercase.

---

## Lexicographical Comparison

Strings are compared from **left to right**.

For example:

```text
abc
abd
```

The first two characters are equal:

```text
a == a
b == b
```

At the third character:

```text
c < d
```

Therefore:

```text
abc < abd
```

So the result would be:

```text
-1
```

---

## Complexity Analysis

For strings of length `n`:

* **Time Complexity:** `O(n)`
* **Space Complexity:** `O(1)` if characters are compared directly.

---

## Constraints

* String length: `1` to `100`
* Both strings have equal length.
* Characters are uppercase or lowercase Latin letters.
* **Time Limit:** 2 seconds
* **Memory Limit:** 256 MB
