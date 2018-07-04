/*
 * Make tap/hold keys work in a threshold that isn't maddening
 * https://github.com/qmk/qmk_firmware/blob/master/docs/feature_advanced_keycodes.md#permissive-hold
 */
#define PERMISSION_HOLD

#include "../../config.h"

#undef TAPPING_TERM
#define TAPPING_TERM 100
