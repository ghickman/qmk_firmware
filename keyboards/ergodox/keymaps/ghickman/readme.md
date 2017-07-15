Building a hex:

```
cd ~/Projects/qmk_firmware/keyboards/ergodox
PATH=/usr/local/CrossPack-AVR-20131216/bin:$PATH make ghickman clean
```

This builds a `.hex` file to `~/Projects/qmk_firmware`.

Upload with Teensy.app

---

`config.h` defines `TAPPING_TERM` to 100 (default is 200) to lower the threshold at which a tapped key can become a modifier again.
