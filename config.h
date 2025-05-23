#pragma once

/* Key matrix configuration. */
#define MATRIX_ROW_PINS \
    { GP29, GP26, GP5, GP4 }
#define MATRIX_COL_PINS \
    { GP7, GP6, GP21, GP28, GP27 }

#define DIODE_DIRECTION COL2ROW

/* Handedness. */
#define SPLIT_HAND_PIN GP15
#define SPLIT_HAND_PIN_LOW_IS_LEFT  // High -> right, Low -> left.
