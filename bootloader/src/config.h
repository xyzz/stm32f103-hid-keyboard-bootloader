#pragma once

// HID Bootloader takes 4K
#define USER_PROGRAM 0x08001000

#define RTC_BOOTLOADER_FLAG 0x7662 /* Flag whether to jump into bootloader, "vb" */
#define RTC_INSECURE_FLAG 0x4953 /* Flag to indicate qmk that we want to boot into insecure mode, "IS" */

#if defined(TARGET_GENERIC)
#define VIAL_KEYBOARD_UID {0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF}
/* setup for bluepill */
#define BL_OUTPUT_BANK GPIOB
#define BL_OUTPUT_PIN 12
#define BL_INPUT_BANK GPIOB
#define BL_INPUT_PIN 13
#elif defined(TARGET_VIAL_TEST)
#define VIAL_KEYBOARD_UID {0x6F, 0xC5, 0xEE, 0x60, 0x90, 0x92, 0x53, 0xA4}
/* setup for bluepill */
#define BL_OUTPUT_BANK GPIOB
#define BL_OUTPUT_PIN 12
#define BL_INPUT_BANK GPIOB
#define BL_INPUT_PIN 13
#elif defined(TARGET_XYZ60)
#define VIAL_KEYBOARD_UID {0x36, 0xCD, 0x23, 0xE1, 0xB4, 0x0F, 0xC3, 0xE4}
// col6, row4
#define BL_OUTPUT_BANK GPIOB
#define BL_OUTPUT_PIN 0
#define BL_INPUT_BANK GPIOB
#define BL_INPUT_PIN 15
#elif defined(TARGET_XYZ8X)
#define VIAL_KEYBOARD_UID {0x7F, 0x5E, 0x10, 0x51, 0x72, 0xE0, 0xF5, 0x88}
// col3, row10
#define BL_OUTPUT_BANK GPIOB
#define BL_OUTPUT_PIN 15
#define BL_INPUT_BANK GPIOA
#define BL_INPUT_PIN 2
#else
#error Unknown target
#endif
