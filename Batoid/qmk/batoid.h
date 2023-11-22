#pragma once

#ifndef BATOID_H
#define BATOID_H

#include "quantum.h"

#define LAYOUT(K000, K001, K002, K003, K004, K005, K006, K007, K008, K009, K010, K011, K100, K101, K102, K103, K104, K105, K106, K107, K108, K109, K110, K111, K200, K301, K201, K202, K203, K204, K205, K206, K207, K208, K209, K210, K211, K300, K302, K304, K306, K307, K311) \
    {                                                                                                                                                                                                                                                                            \
        {K000, K001, K002, K003, K004, K005, K006, K007, K008, K009, K010, K011}, {K100, K101, K102, K103, K104, K105, K106, K107, K108, K109, K110, K111}, {K200, K201, K202, K203, K204, K205, K206, K207, K208, K209, K210, K211}, {                                          \
            K300, K301, K302, KC_NO, K304, KC_NO, K306, K307, KC_NO, KC_NO, KC_NO, K311                                                                                                                                                                                          \
        }                                                                                                                                                                                                                                                                        \
    }

#endif