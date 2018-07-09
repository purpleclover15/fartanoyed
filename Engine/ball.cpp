#include "ball.h"

Ball::Ball(Vec2 pos, Vec2 vel)
{
	position = pos;
	velocity = vel;
}

void Ball::updateBall()
{
	position = position + velocity;
}

void Ball::drawBall(Graphics & gfx)
{
	SpriteCodex::DrawBall(position, gfx);
}

bool Ball::doWallCollision(const Rect & Walls)
{
	const Rect rect = Rect::getRect(position, radius);
	return true;
}

