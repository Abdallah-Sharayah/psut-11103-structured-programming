# Structured Programming — Final Exam Prep

**Course:** 11103 Structured Programming, PSUT
**Exam:** May 31, 2026

Solutions to past-exam-style problems across the four topics:

- Nested loops
- 2D arrays
- Recursion
- Pointers

Each `.c` file is self-contained. Compile with:

```bash
gcc <file>.c -o run && ./run
```

## Layout

```
01-nested-loops/    — patterns: triangle, multiplication table, chessboard,
                      pyramid, hollow square, christmas tree
02-2d-arrays/       — fill/print, sums, max-position, transpose, border fill,
                      row swap, diagonal, every-row-unique, random fill+avg
03-recursion/       — linear, accumulator, reducer, string, recursive bubble
                      sort, recursive 2D fill/print/max
04-pointers/        — basics, const, arithmetic, swap, two-pointer string
                      functions
extras/             — outside-exam misc: perfect/prime numbers, descending
                      bubble sort, Caesar cipher, password retry,
                      positives/negatives split, shuffle, string input
traces/             — tree-recursion trace walkthroughs (mystery, f2)
PATTERNS.md         — one-page reference: every template, every gotcha
```

## Past-paper questions solved here

| Question | File |
|---|---|
| Form A Q2A (2024) — Border fill | `02-2d-arrays/05-border-fill.c` |
| Form A Q2C (2024) — Every row has unique digits | `02-2d-arrays/08-rows-unique-digits.c` |
| Form A Q3A (2024) — Reverse after character | `04-pointers/13-reverse.c` |
| Form A Q5 (2024) — Count negatives recursively | `03-recursion/05-count-negatives.c` |
| Spring 2024 Q2E — Swap two rows (pattern) | `02-2d-arrays/06-swap-rows.c` |
| Spring 2024 Q4-1 — Recursive bubble sort | `03-recursion/11-bubble-sort-recursive.c` |
| Past paper — RemoveCommas (8 pts) | `04-pointers/10-remove-commas.c` |

## Notes to future-me

- All files include `return 0;` at the end of `main` — habit for paper exams.
- All 2D code uses `#define ROW`/`#define COL` for clarity.
- Pointer functions that only read use `const char *`.
- Memory string functions ALWAYS terminate with `*dst = '\0'`.
- Recursion base cases describe the trivial answer for the smallest valid input,
  not "process the last element."
