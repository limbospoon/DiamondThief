#pragma once
#include "Graphics.h"
#include "Dude.h"

class Bomb
{
public:
	void Init(float posX, float posY, float dirX, float dirY);
	void DrawBomb(Graphics& gfx) const;
	void MoveBomb();
	bool IsColliding(const Dude& dude) const;
	void Bounce(float xBounds, float yBounds);

private:
	const float size = 16.0f;
	float x = 300;
	float y = 300;
	float dx;
	float dy;
};