#ifndef KB_H
#define KB_H

#include "quantum.h"

#define KEYMAP( \
	K000,       K002,       K004,       K006,       K008,       K010, K011, \
	K100, K101, K102, K103, K104, K105, K106, K107, K108, K109, K110, K111, \
	K200, K201, K202, K203, K204, K205, K206, K207, K208, K209, K210, K211, \
	K300, K301, K302, K303, K304, K305, K306, K307, K308, K309, K310, K311, \
	K400, K401, K402, K403, K404, K405, K406, K407, K408, K409, K410, K411, \
	K500, K501, K502, K503,       K505,       K507, K508, K509, K510, K511  \
) { \
	{ K000,  KC_NO, K002,  KC_NO, K004,  KC_NO, K006,  KC_NO, K008,  KC_NO, K010,  K011 }, \
	{ K100,  K101,  K102,  K103,  K104,  K105,  K106,  K107,  K108,  K109,  K110,  K111 }, \
	{ K200,  K201,  K202,  K203,  K204,  K205,  K206,  K207,  K208,  K209,  K210,  K211 }, \
	{ K300,  K301,  K302,  K303,  K304,  K305,  K306,  K307,  K308,  K309,  K310,  K311 }, \
	{ K400,  K401,  K402,  K403,  K404,  K405,  K406,  K407,  K408,  K409,  K410,  K411 }, \
	{ K500,  K501,  K502,  K503,  KC_NO, K505,  KC_NO, K507,  K508,  K509,  K510,  K511 }  \
}

#endif