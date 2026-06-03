# Firmware Build Record - Symptom v1.0

Document status: public production firmware record  
Last updated: 2026-06-03

## Build identification

| Item | Value |
| --- | --- |
| Product | Symptom v1.0 |
| Firmware role | Production/customer firmware |
| Firmware framework | QMK |
| MCU | RP2040 |
| Keyboard source | `keyboards/symptomv1/` |
| Keymap source | `keyboards/symptomv1/keymaps/via/` |
| Compiled UF2 | `firmware/symptomv1_via.uf2` |
| Build environment | QMK MSYS |
| Build command | `qmk compile -kb symptomv1 -km via` |
| Build source placement | `symptomv1/` keyboard folder copied into local `qmk_firmware/keyboards/`, resulting in `qmk_firmware/keyboards/symptomv1/` |
| QMK source/version basis | Current upstream QMK firmware available in QMK MSYS at the time of build; exact upstream commit not retained |
| UF2 SHA-256 | `F23F3ADE1FA57C2E41FC7406C5ED0CDDB79F3A4BEB64E582A37909A02E95BB4A` |

## Firmware behavior

This is the production VIA firmware intended for customer units.

## USB metadata

Current source values in `keyboards/symptomv1/keyboard.json`:

| Field | Value |
| --- | --- |
| `keyboard_name` | `SYMPTOM_V1` |
| `manufacturer` | `EmanoN` |
| `maintainer` | `emanonFM` |
| `usb.vid` | `0x5359` |
| `usb.pid` | `0x0002` |
| `usb.device_version` | `1.0.0` |

## Test status

The retained UF2 was rebuilt after the manufacturer string was changed to `EmanoN` and rebuilt again on 2026-06-03 after source header/comment updates.

Functional test status: user/manufacturer reported on 2026-05-30 that the rebuilt production firmware was flashed, tested, and works correctly.

## Source license headers

QMK source files `config.h` and `keymaps/via/keymap.c` include GPL source headers in the same general style commonly used in QMK keyboard files:

```text
/*
 * Copyright 2026 EmanoN
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */
```

The full header also includes the standard GPL no-warranty/free-software notice. These header additions are source comments only and do not intentionally change firmware behavior. The retained UF2 was rebuilt after these source updates; the checksum above identifies the current retained binary.
