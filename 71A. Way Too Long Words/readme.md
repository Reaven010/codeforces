# A. Way Too Long Words

> **Codeforces Round:** Beta Round #65 (Div. 2)  
> **Problem:** 71A - Way Too Long Words  
> **Difficulty:** 800  
> **Tags:** Constructive Algorithms, Strings

---

## 📖 Problem Statement

Some words are so long that writing them repeatedly is inconvenient.

A word is considered **too long** if its length is **strictly greater than 10** characters.

For every such word, replace it with an abbreviation formed by:

- The **first character**
- The **number of characters between the first and last characters**
- The **last character**

Words with length **10 or less** remain unchanged.

---

## Examples

### Example 1

**Input**
```text
4
word
localization
internationalization
pneumonoultramicroscopicsilicovolcanoconiosis
```

**Output**
```text
word
l10n
i18n
p43s
```

---

## Constraints

- `1 ≤ n ≤ 100`
- `1 ≤ |word| ≤ 100`
- Words consist only of lowercase English letters.
- Time Limit: **1 second**
- Memory Limit: **256 MB**

---

## 💡 Approach

For each word:

1. Read the word.
2. If its length is **10 or less**, print it unchanged.
3. Otherwise:
   - Print the first character.
   - Print `(length - 2)`.
   - Print the last character.

Example:

- `localization`
  - Length = 12
  - Middle characters = 10
  - Result = `l10n`

---

## ✅ Solution

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        string s;
        cin >> s;

        if (s.length() > 10) {
            cout << s.front()
                 << s.length() - 2
                 << s.back() << '\n';
        } else {
            cout << s << '\n';
        }
    }

    return 0;
}
```

---

## ⏱ Complexity Analysis

| Operation | Complexity |
|-----------|------------|
| Time | **O(n × m)** |
| Space | **O(1)** |

Where:

- `n` = Number of words
- `m` = Maximum length of a word (≤100)

---

## 🧠 Key Observation

Only words with **length greater than 10** need modification.

The abbreviation format is:

```text
first_letter + (length - 2) + last_letter
```

Examples:

| Word | Abbreviation |
|------|--------------|
| word | word |
| localization | l10n |
| internationalization | i18n |
| accessibility | a11y |
| pneumonoultramicroscopicsilicovolcanoconiosis | p43s |

---

## 🏷️ Tags

- Strings
- Implementation
- Constructive Algorithms

---

## 🔗 Problem Link

https://codeforces.com/problemset/problem/71/A

---

**Status:** ✅ Accepted