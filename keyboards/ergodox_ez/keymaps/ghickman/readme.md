Building a hex:

```
make ergodox_ez:ghickman:teensy
```

This builds a `.hex` file and uploads direct to the board.

---

`config.h` defines `TAPPING_TERM` to 100 (default is 200) to lower the threshold at which a tapped key can become a modifier again.
