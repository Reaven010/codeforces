# A. Boy or Girl

## Problem Statement

Those days, many boys use beautiful girls' photos as avatars in forums. So it is pretty hard to tell the gender of a user at the first glance. Last year, our hero went to a forum and had a nice chat with a beauty (he thought so). After that they talked very often and eventually they became a couple in the network.

But yesterday, he came to see "her" in the real world and found out "she" is actually a very strong man! Our hero is very sad and he is too tired to love again now. So he came up with a way to recognize users' genders by their user names.

This is his method: if the number of **distinct characters** in one's user name is odd, then he is a male, otherwise she is a female.

You are given the string that denotes the user name. Help our hero determine the gender of this user using his method.

---

## Input Format

The first line contains a non-empty string that contains only lowercase English letters — the user name.

The string contains at most **100 letters**.

---

## Output Format

If it is a female by our hero's method, print:

```text
CHAT WITH HER!
```

Otherwise, print:

```text
IGNORE HIM!
```

---

## Example

### Input

```text
wjmzbmr
```

### Output

```text
CHAT WITH HER!
```

---

## Explanation

There are **6 distinct characters** in:

```text
wjmzbmr
```

These characters are:

```text
w, j, m, z, b, r
```

Since the number of distinct characters is **6**, which is even, the output is:

```text
CHAT WITH HER!
```

---

## Constraints

* `1 ≤ username length ≤ 100`
* The username contains only lowercase English letters.
* **Time Limit:** 1 second
* **Memory Limit:** 256 MB
