# Symptom v1.0 QMK Firmware

Public production firmware source for the Custom USB Keyboard **Symptom v1.0** by EmanoN.

This repository is intended to provide the source code for the firmware shipped with Symptom v1.0 keyboards.

## Contents

```text
keyboards/symptomv1/        QMK keyboard source and VIA keymap
firmware/symptomv1_via.uf2  Tested production UF2 firmware image
docs/keymap_reference/      Production keymap layer screenshots
docs/switches/datasheets/   Switch datasheets linked from the shop page
releases/r001/              Frozen release copy for the initial shipping batch
FIRMWARE_BUILD_RECORD.md    Build command, metadata, and SHA-256 record
```

Only the customer production firmware is included.

Symptom v1.0 is not part of upstream QMK at the time of this release. The build command below works only after this repository's `keyboards/symptomv1/` folder has been copied into a local QMK checkout.

## Firmware

| Item | Value |
| --- | --- |
| Product | Symptom v1.0 |
| Firmware framework | QMK |
| MCU | RP2040 |
| Interface | Wired USB HID keyboard |
| Production keymap | `via` |
| Current recorded release | `r001` |
| Build command | `qmk compile -kb symptomv1 -km via` |
| Required local keyboard path before build | `qmk_firmware/keyboards/symptomv1/` |
| QMK upstream commit | `407e6e242e2b96f1bd0aa21520ee6bef45321e94` |
| Tested UF2 SHA-256 | `F23F3ADE1FA57C2E41FC7406C5ED0CDDB79F3A4BEB64E582A37909A02E95BB4A` |

## Build

1. Set up QMK MSYS according to the official QMK documentation.
2. Copy this repository's `keyboards/symptomv1/` folder into your local QMK checkout's `keyboards/` folder, so the final path is `qmk_firmware/keyboards/symptomv1/`. A fresh QMK install will not contain this keyboard folder by itself.
3. Open QMK MSYS, go to the `qmk_firmware` root, and run:

```sh
qmk compile -kb symptomv1 -km via
```

The prebuilt production UF2 is retained in `firmware/symptomv1_via.uf2`. The frozen release copy for the first shipping batch is retained in `releases/r001/`.

## License

This firmware is based on QMK Firmware.

Unless a file states otherwise, the Symptom v1.0 firmware files in this repository are released under `GPL-3.0-or-later`.

QMK project:

- https://github.com/qmk/qmk_firmware
