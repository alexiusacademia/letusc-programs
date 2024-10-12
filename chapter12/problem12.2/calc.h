/*
    calc.h

    The header file for calculation macros.

    Author: Alexius Academia
    Date:   October 12, 2024
*/
#include <math.h>
#define PI 3.14159
#define AREAC(r) (PI * r * r)
#define PERIC(r) (2 * PI * r)
#define AREAS(s) (s * s)
#define PERIS(s) (4 * s)
#define AREAT(a, b, c) ({                           \
            float s = (a + b + c) / 2;              \
            sqrtf(s * (s - a) * (s - b) * (s - c)); \
        })
#define PERIT(a, b, c) (a + b + c)
