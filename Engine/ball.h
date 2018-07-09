#pragma once

#include "Rect.h"
#include "Vec2.h"
#include "Graphics.h"
#include "SpriteCodex.h"


class Ball
{
public:
//Functions
	Ball(Vec2 pos, Vec2 vel);
	void updateBall();
	void drawBall(Graphics& gfx);
	bool doWallCollision(const Rect& Walls);
//Variables
	float radius = 7.0f;
	Vec2 position;
	Vec2 velocity;
	Rect getRect() const;
private:

};
