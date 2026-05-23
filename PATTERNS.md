# Pattern Reference Card

Quick recall for the exam. Every problem fits one of these templates.

---

## Nested loops

**Pattern of stars at column j ≤ row i:**
```c
for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) printf("*");
    printf("\n");
}
```

**Centered pyramid:** spaces then stars per row.
```c
for (int i = 0; i < n; i++) {
    for (int j = i+1; j < n; j++) printf(" ");
    for (int k = 0; k < 2*i+1; k++) printf("*");
    printf("\n");
}
```

**Chessboard alternation:** `if ((i+j) % 2 == 0) ... else ...`

**Border-only condition:** `i == 0 || i == size-1 || j == 0 || j == size-1`

---

## 2D arrays

**Always `#define ROW` / `#define COL` at the top.** Pass `int m[][COL]` as parameter.

**Row sum:** fix `i`, loop `j`.
**Column sum:** fix `j`, loop `i`. (Outer = j when summing per column.)

**Max/min with position:**
```c
int max = m[0][0], maxRow = 0, maxCol = 0;
for i, for j:
    if (m[i][j] > max) { max = m[i][j]; maxRow = i; maxCol = j; }
```
**Initialize max/min to `m[0][0]`, not 0.** Initialize each position variable separately
(C trap: `int a, b, c = 0;` only inits `c`).

**Transpose:** `transposed[j][i] = original[i][j]`.

**Border fill:** one loop, 4 assignments (top, bottom, left, right). Corners written twice — harmless.

**Swap two rows:** one loop over columns, swap with temp.

**Main diagonal:** one loop, access `m[i][i]`.
**Secondary diagonal:** `for (int i=0, j=size-1; i<size; i++, j--) ... m[i][j] ...`

**Every-row-contains-each-digit (Form A Q2C):** triple-nested
- outer = row
- middle = target digit
- inner = walk row counting
- `if (count != 1) return 0;` early-exits.

---

## Recursion

**Skeleton:**
```c
if (base case) return trivial answer;
else { do work; return f(smaller); }
```

**Linear shapes:**

| Shape | Example | What recursive call returns |
|---|---|---|
| Accumulator | countNegatives, stringLength | A running count; you add to it |
| Reducer | findMax, factorial | A partial answer; combine with own element |

**Print order:**
- recurse before print → forward output (1..n)
- print before recurse → reverse output (n..1)

**Array recursion (shrinking size):**
```c
if (size == 0) return 0;       // empty has 0
return (check arr[size-1]) + f(arr, size-1);
```

**Array recursion (growing index):**
```c
if (index == size - 1) return arr[index];  // last element
return f(arr, index+1, size);
```

**String recursion:** base case is `arr[index] == '\0'`.

**Tree recursion tracing:**
- Draw the call tree.
- Only the base case prints (for void functions like mystery).
- For functions with prints at multiple positions (A, B, C), each internal call adds prints too.
- Order is left-to-right depth-first.

**Recursive bubble sort skeleton (Spring 2024 Q4-1):**
```c
void bubbleSort(int arr[], int size) {
    if (size == 1) return;
    for (int i = 0; i < size - 1; i++)
        if (arr[i] > arr[i+1]) { swap with temp }
    bubbleSort(arr, size - 1);   // shrink by 1
}
```

---

## Pointers

**Basics:**
- `&x` = address of x
- `*p` = value at p
- `int *p = &x;` then `*p = 99;` modifies x

**Three arithmetic forms (memorize):**
| | Returns | Side effect |
|---|---|---|
| `(*p)++` | OLD value | value incremented |
| `++(*p)` | NEW value | value incremented |
| `*p++` | current value | pointer advances |
| `(*p)++` ≠ `*p++` | | |

**Three const flavors (read right-to-left):**
- `int * const p` — pointer locked, value free
- `int const * p` — value locked, pointer free
- `int const * const p` — both locked

**Array decay:** array name IS a pointer to first element. No `&` needed.
`numbers[i]` ≡ `*(numbers+i)` ≡ `p[i]` ≡ `*(p+i)`.

**sizeof trap:** inside `main`, `sizeof(arr)` = full array. Inside a function `f(int arr[])`,
`sizeof(arr)` = sizeof a pointer (8 bytes). Always pass size as separate parameter.

**String walk:**
```c
while (*s != '\0') {
    // use *s
    s++;
}
```

**Two-pointer filter (RemoveCommas pattern):**
```c
void f(char *src, char *dst) {
    while (*src != '\0') {
        if (*src != FILTER)
            *dst++ = *src;      // assign-and-advance
        src++;
    }
    *dst = '\0';                // ALWAYS terminate
}
```
Same skeleton works for RemoveCommas, RemoveSpaces, RemoveDigits, KeepOnlyLetters, etc.

**Find-then-reverse (Form A Q3A):**
1. Walk pointer until target char or '\0'.
2. If '\0' reached, return (not found).
3. `start = p + 1`, walk `end` to last char before '\0'.
4. While `start < end`: swap, advance start, retreat end.

**Writable vs read-only strings:**
- `char arr[] = "hello";` — writable (array)
- `char *p = "hello";` — read-only literal (CRASH if you write to it)
- A function taking `char *s` can be called with either — works only if caller passed a writable buffer.
- Use `const char *s` in parameter when you only read.

---

## C quirks the exam tests

- `int / int` = integer division. `1/2 = 0`.
- `int a, b, c = 0;` only inits c.
- `y < x < a[0]` is `(y<x) < a[0]` — chained comparison is NOT mathematical.
- `*a` where `a` is an array = `a[0]`.
- `a[a[1]]` evaluates inside-out.
- Local variables shadow globals; modifying local doesn't touch global.
- `void f(int *w) { w++; }` increments the LOCAL pointer copy, not the caller's variable.
- `f(x)` with `int` parameter never affects caller's `x`.
