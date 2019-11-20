#pragma once
#include "Graphics.h"

class Dude
{
public:
	Dude(float posX, float posY);
	void DrawDude(Graphics& gfx);
	void MoveDude(float dx, float dy, float deltaTime);
	void Reset();
	float GetX() const;
	float GetY() const;

private:
	const float size = 16;
	float x;
	float y;
	float startX = 416;
	float startY = 316;
	Color normal = Colors::Yellow;
	Color invincibleColor = Colors::Red;
	Color currentColor = normal;
};