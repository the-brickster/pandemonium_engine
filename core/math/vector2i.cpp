/*************************************************************************/
/*  vector2i.cpp                                                         */
/*************************************************************************/
/*                         This file is part of:                         */
/*                          PANDEMONIUM ENGINE                           */
/*             https://github.com/Relintai/pandemonium_engine            */
/*************************************************************************/
/* Copyright (c) 2022-present Péter Magyar.                              */
/* Copyright (c) 2014-2022 Godot Engine contributors (cf. AUTHORS.md).   */
/* Copyright (c) 2007-2022 Juan Linietsky, Ariel Manzur.                 */
/*                                                                       */
/* Permission is hereby granted, free of charge, to any person obtaining */
/* a copy of this software and associated documentation files (the       */
/* "Software"), to deal in the Software without restriction, including   */
/* without limitation the rights to use, copy, modify, merge, publish,   */
/* distribute, sublicense, and/or sell copies of the Software, and to    */
/* permit persons to whom the Software is furnished to do so, subject to */
/* the following conditions:                                             */
/*                                                                       */
/* The above copyright notice and this permission notice shall be        */
/* included in all copies or substantial portions of the Software.       */
/*                                                                       */
/* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,       */
/* EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF    */
/* MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.*/
/* IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY  */
/* CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,  */
/* TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE     */
/* SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.                */
/*************************************************************************/

#include "vector2i.h"

#include "core/string/ustring.h"

Vector2i Vector2i::clamp(const Vector2i &p_min, const Vector2i &p_max) const {
	return Vector2i(
			CLAMP(x, p_min.x, p_max.x),
			CLAMP(y, p_min.y, p_max.y));
}

int64_t Vector2i::length_squared() const {
	return x * (int64_t)x + y * (int64_t)y;
}

double Vector2i::length() const {
	return Math::sqrt((double)length_squared());
}

Vector2i Vector2i::operator+(const Vector2i &p_v) const {
	return Vector2i(x + p_v.x, y + p_v.y);
}
void Vector2i::operator+=(const Vector2i &p_v) {
	x += p_v.x;
	y += p_v.y;
}
Vector2i Vector2i::operator-(const Vector2i &p_v) const {
	return Vector2i(x - p_v.x, y - p_v.y);
}
void Vector2i::operator-=(const Vector2i &p_v) {
	x -= p_v.x;
	y -= p_v.y;
}

Vector2i Vector2i::operator*(const Vector2i &p_v1) const {
	return Vector2i(x * p_v1.x, y * p_v1.y);
};

Vector2i Vector2i::operator*(const int &rvalue) const {
	return Vector2i(x * rvalue, y * rvalue);
};
void Vector2i::operator*=(const int &rvalue) {
	x *= rvalue;
	y *= rvalue;
};

Vector2i Vector2i::operator/(const Vector2i &p_v1) const {
	return Vector2i(x / p_v1.x, y / p_v1.y);
};

Vector2i Vector2i::operator/(const int &rvalue) const {
	return Vector2i(x / rvalue, y / rvalue);
};

void Vector2i::operator/=(const int &rvalue) {
	x /= rvalue;
	y /= rvalue;
};

Vector2i Vector2i::operator-() const {
	return Vector2i(-x, -y);
}

bool Vector2i::operator==(const Vector2i &p_vec2) const {
	return x == p_vec2.x && y == p_vec2.y;
}
bool Vector2i::operator!=(const Vector2i &p_vec2) const {
	return x != p_vec2.x || y != p_vec2.y;
}

Vector2i::operator String() const {
	return "(" + itos(x) + ", " + itos(y) + ")";
}
