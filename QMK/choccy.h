/*
Copyright 2023 Evan Spreng

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef KB_H
#define KB_H

#pragma once

#include "quantum.h"

#define LAYOUT( \
	LA1, LA2, LA3, LA4, LA5, LA6,				RA1, RA2, RA3, RA4, RA5, RA6, \
	LB1, LB2, LB3, LB4, LB5, LB6,				RB1, RB2, RB3, RB4, RB5, RB6, \
	LC1, LC2, LC3, LC4, LC5, LC6,				RC1, RC2, RC3, RC4, RC5, RC6, \
	LD1, LD2, LD3, LD4, LD5, LD6,				RD1, RD2, RD3, RD4, RD5, RD6, \
	LE1, LE2, LE3, LE4, LE5, LE6,				RE1, RE2, RE3, RE4, RE5, RE6  \
) { \
	{ LA1, LA2, LA3, LA4, LA5, LA6 }, \
	{ LB1, LB2, LB3, LB4, LB5, LB6 }, \
	{ LC1, LC2, LC3, LC4, LC5, LC6 }, \
	{ LD1, LD2, LD3, LD4, LD5, LD6 }, \
	{ LE1, LE2, LE3, LE4, LE5, LE6 }, \
	{ RA1, RA2, RA3, RA4, RA5, RA6 }, \
	{ RB1, RB2, RB3, RB4, RB5, RB6 }, \
	{ RC1, RC2, RC3, RC4, RC5, RC6 }, \
	{ RD1, RD2, RD3, RD4, RD5, RD6 }, \
	{ RE1, RE2, RE3, RE4, RE5, RE6 }  \
	}
#endif