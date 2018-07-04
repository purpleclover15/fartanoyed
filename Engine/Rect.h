#pragma once

#include "Vec2.h"

class Rect
{

public:
	Rect() = default;
	Rect(const float right_in, const float left_in, const float up_in, const float down_in);
	Rect(const Vec2& in_vec1, const Vec2& in_vec2);
	Rect(const Vec2& in_vec1, const float width, const float height);

	float right;
	float left;
	float up;
	float down;
};

