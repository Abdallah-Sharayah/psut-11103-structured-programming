# Trace: `mystery(3, 1)` — Spring 2024 Q4-2

```c
void mystery(int n, int a) {
    if (n <= 0) {
        printf("%d\n", a);
        return;
    }
    mystery(n - 1, a + 1);
    mystery(n - 2, a + 2);
}
```

## Call tree

```
mystery(3, 1)
├── mystery(2, 2)
│   ├── mystery(1, 3)
│   │   ├── mystery(0, 4)    ← BASE, prints 4
│   │   └── mystery(-1, 5)   ← BASE, prints 5
│   └── mystery(0, 4)        ← BASE, prints 4
└── mystery(1, 3)
    ├── mystery(0, 4)        ← BASE, prints 4
    └── mystery(-1, 5)       ← BASE, prints 5
```

## Output

```
4
5
4
4
5
```

## Rule

Only the base case prints. Order is left-to-right depth-first traversal of the tree.
