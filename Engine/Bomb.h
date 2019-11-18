#pragma once
#include "Graphics.h"
#include "Dude.h"

class Bomb
{
public:
	void Init(int posX, int posY, int dirX, int dirY);
	void DrawBomb(Graphics& gfx) const;
	void MoveBomb();
	bool IsColliding(const Dude& dude) const;
	void Bounce(int xBounds, int yBounds);

private:
	const int size = 16;
	int x = 300;
	int y = 300;
	int dx;
	int dy;
};