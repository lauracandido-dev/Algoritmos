#include "conversoes.h"

float celsius_fahrenheit(float c) {
    return (c * 1.8) + 32;
}

float fahrenheit_celsius(float f) {
    return (f - 32) / 1.8;
}

float metros_km(float m) {
    return m / 1000.0;
}

float km_metros(float km) {
    return km * 1000.0;
}

float seg_min(float s) {
    return s / 60.0;
}

float min_seg(float m) {
    return m * 60.0;
}
