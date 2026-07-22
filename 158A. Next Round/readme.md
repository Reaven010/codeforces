# A. Next Round

## Problem Statement

In a programming contest, a participant advances to the next round if:

* Their score is **greater than or equal to** the score of the participant in the **k-th position**, **and**
* Their score is **greater than 0**.

You are given the scores of all participants in **non-increasing order**. Determine how many participants qualify for the next round.

---

## Input Format

* The first line contains two integers:

  * **`n`** — the total number of participants.
  * **`k`** — the position used as the qualifying threshold.

  **Constraints:**

  * `1 ≤ k ≤ n ≤ 50`

* The second line contains **`n`** space-separated integers:

  `a₁, a₂, ..., aₙ`

  where `aᵢ` is the score of the participant in the **i-th place**.

  **Constraints:**

  * `0 ≤ aᵢ ≤ 100`
  * The scores are given in **non-increasing order**.

---

## Output Format

Print a single integer representing the number of participants who advance to the next round.

---

## Example

### Input

```text
8 5
10 9 8 7 7 7 5 5
```

### Output

```text
6
```

---

## Explanation

The participant in the **5th position** has a score of **7**.

Any participant with:

* Score **≥ 7**, and
* Score **> 0**

qualifies for the next round.

The qualifying scores are:

```text
10 9 8 7 7 7
```

Therefore, **6 participants** advance.

---

## Constraints

* **Time Limit:** 3 seconds
* **Memory Limit:** 256 MB

---

## Approach

1. Read `n` and `k`.
2. Store the participants' scores.
3. Let the qualifying score be the score of the participant at index `k - 1`.
4. Count all participants whose score:

   * is greater than or equal to the qualifying score, and
   * is greater than `0`.
5. Print the count.

---

## Complexity Analysis

* **Time Complexity:** `O(n)`
* **Space Complexity:** `O(n)` (or `O(1)` extra space if processed directly after reading)
