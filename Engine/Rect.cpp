#include "Rect.h"



Rect::Rect(const float right_in, const float up_in, const float left_in, const float down_in)
{
	right = right_in;
	up = up_in;
	left = left_in;
	down = down_in;
}

Rect::Rect(const Vec2& in_vec1, const Vec2& in_vec2)
{
	Rect(in_vec1.x, in_vec1.y, in_vec2.x, in_vec2.y);
}

Rect::Rect(const Vec2 & in_vec1, const float width, const float height)
{
	Rect(in_vec1.x, in_vec1.y, width, height);
}

bool Rect::checkCollision(Rect & rect_in)
{
	return this->down <= rect_in.up &&
		this->up <= rect_in.down &&
		this->left <= rect_in.right &&
		this->right <= rect_in.left;
}

Rect Rect::getRect(const Vec2 & in_vec1, const float radius)
{
	Vec2 vecRadius(radius , radius );
	return Rect( in_vec1 - vecRadius, in_vec1 + vecRadius);
}

