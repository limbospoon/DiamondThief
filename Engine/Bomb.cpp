#include "Bomb.h"

void Bomb::Init(int posX, int posY, int dirX, int dirY)
{
	//Test
	x = posX;
	y = posY;
	dx = dirX;
	dy = dirY;
}

void Bomb::DrawBomb(Graphics& gfx) const
{
	gfx.PutPixel(7 + x, 1 + y, 255, 254, 253);
	gfx.PutPixel(8 + x, 1 + y, 255, 254, 253);
	gfx.PutPixel(9 + x, 1 + y, 255, 254, 253);
	gfx.PutPixel(5 + x, 2 + y, 255, 254, 253);
	gfx.PutPixel(6 + x, 2 + y, 170, 169, 169);
	gfx.PutPixel(7 + x, 2 + y, 170, 169, 169);
	gfx.PutPixel(8 + x, 2 + y, 22, 22, 22);
	gfx.PutPixel(9 + x, 2 + y, 170, 169, 169);
	gfx.PutPixel(10 + x, 2 + y, 170, 169, 169);
	gfx.PutPixel(11 + x, 2 + y, 255, 254, 253);
	gfx.PutPixel(3 + x, 3 + y, 255, 254, 253);
	gfx.PutPixel(4 + x, 3 + y, 170, 169, 169);
	gfx.PutPixel(5 + x, 3 + y, 22, 22, 22);
	gfx.PutPixel(6 + x, 3 + y, 170, 169, 169);
	gfx.PutPixel(7 + x, 3 + y, 22, 22, 22);
	gfx.PutPixel(8 + x, 3 + y, 22, 22, 22);
	gfx.PutPixel(9 + x, 3 + y, 22, 22, 22);
	gfx.PutPixel(10 + x, 3 + y, 170, 169, 169);
	gfx.PutPixel(11 + x, 3 + y, 22, 22, 22);
	gfx.PutPixel(12 + x, 3 + y, 170, 169, 169);
	gfx.PutPixel(13 + x, 3 + y, 255, 254, 253);
	gfx.PutPixel(3 + x, 4 + y, 170, 169, 169);
	gfx.PutPixel(4 + x, 4 + y, 22, 22, 22);
	gfx.PutPixel(5 + x, 4 + y, 22, 22, 22);
	gfx.PutPixel(6 + x, 4 + y, 22, 22, 22);
	gfx.PutPixel(7 + x, 4 + y, 170, 169, 169);
	gfx.PutPixel(8 + x, 4 + y, 22, 22, 22);
	gfx.PutPixel(9 + x, 4 + y, 170, 169, 169);
	gfx.PutPixel(10 + x, 4 + y, 22, 22, 22);
	gfx.PutPixel(11 + x, 4 + y, 22, 22, 22);
	gfx.PutPixel(12 + x, 4 + y, 22, 22, 22);
	gfx.PutPixel(13 + x, 4 + y, 170, 169, 169);
	gfx.PutPixel(2 + x, 5 + y, 255, 254, 253);
	gfx.PutPixel(3 + x, 5 + y, 170, 169, 169);
	gfx.PutPixel(4 + x, 5 + y, 170, 169, 169);
	gfx.PutPixel(5 + x, 5 + y, 22, 22, 22);
	gfx.PutPixel(6 + x, 5 + y, 170, 169, 169);
	gfx.PutPixel(7 + x, 5 + y, 170, 169, 169);
	gfx.PutPixel(8 + x, 5 + y, 170, 169, 169);
	gfx.PutPixel(9 + x, 5 + y, 170, 169, 169);
	gfx.PutPixel(10 + x, 5 + y, 170, 169, 169);
	gfx.PutPixel(11 + x, 5 + y, 22, 22, 22);
	gfx.PutPixel(12 + x, 5 + y, 170, 169, 169);
	gfx.PutPixel(13 + x, 5 + y, 170, 169, 169);
	gfx.PutPixel(14 + x, 5 + y, 255, 254, 253);
	gfx.PutPixel(2 + x, 6 + y, 170, 169, 169);
	gfx.PutPixel(3 + x, 6 + y, 170, 169, 169);
	gfx.PutPixel(4 + x, 6 + y, 170, 169, 169);
	gfx.PutPixel(5 + x, 6 + y, 170, 169, 169);
	gfx.PutPixel(6 + x, 6 + y, 170, 169, 169);
	gfx.PutPixel(7 + x, 6 + y, 170, 169, 169);
	gfx.PutPixel(8 + x, 6 + y, 22, 22, 22);
	gfx.PutPixel(9 + x, 6 + y, 170, 169, 169);
	gfx.PutPixel(10 + x, 6 + y, 170, 169, 169);
	gfx.PutPixel(11 + x, 6 + y, 170, 169, 169);
	gfx.PutPixel(12 + x, 6 + y, 170, 169, 169);
	gfx.PutPixel(13 + x, 6 + y, 170, 169, 169);
	gfx.PutPixel(14 + x, 6 + y, 170, 169, 169);
	gfx.PutPixel(1 + x, 7 + y, 255, 254, 253);
	gfx.PutPixel(2 + x, 7 + y, 170, 169, 169);
	gfx.PutPixel(3 + x, 7 + y, 22, 22, 22);
	gfx.PutPixel(4 + x, 7 + y, 170, 169, 169);
	gfx.PutPixel(5 + x, 7 + y, 170, 169, 169);
	gfx.PutPixel(6 + x, 7 + y, 170, 169, 169);
	gfx.PutPixel(7 + x, 7 + y, 22, 22, 22);
	gfx.PutPixel(8 + x, 7 + y, 22, 22, 22);
	gfx.PutPixel(9 + x, 7 + y, 22, 22, 22);
	gfx.PutPixel(10 + x, 7 + y, 170, 169, 169);
	gfx.PutPixel(11 + x, 7 + y, 170, 169, 169);
	gfx.PutPixel(12 + x, 7 + y, 170, 169, 169);
	gfx.PutPixel(13 + x, 7 + y, 22, 22, 22);
	gfx.PutPixel(14 + x, 7 + y, 170, 169, 169);
	gfx.PutPixel(15 + x, 7 + y, 255, 254, 253);
	gfx.PutPixel(1 + x, 8 + y, 255, 254, 253);
	gfx.PutPixel(2 + x, 8 + y, 22, 22, 22);
	gfx.PutPixel(3 + x, 8 + y, 22, 22, 22);
	gfx.PutPixel(4 + x, 8 + y, 22, 22, 22);
	gfx.PutPixel(5 + x, 8 + y, 170, 169, 169);
	gfx.PutPixel(6 + x, 8 + y, 170, 169, 169);
	gfx.PutPixel(7 + x, 8 + y, 170, 169, 169);
	gfx.PutPixel(8 + x, 8 + y, 22, 22, 22);
	gfx.PutPixel(9 + x, 8 + y, 170, 169, 169);
	gfx.PutPixel(10 + x, 8 + y, 170, 169, 169);
	gfx.PutPixel(11 + x, 8 + y, 170, 169, 169);
	gfx.PutPixel(12 + x, 8 + y, 22, 22, 22);
	gfx.PutPixel(13 + x, 8 + y, 22, 22, 22);
	gfx.PutPixel(14 + x, 8 + y, 22, 22, 22);
	gfx.PutPixel(15 + x, 8 + y, 255, 254, 253);
	gfx.PutPixel(1 + x, 9 + y, 255, 254, 253);
	gfx.PutPixel(2 + x, 9 + y, 170, 169, 169);
	gfx.PutPixel(3 + x, 9 + y, 22, 22, 22);
	gfx.PutPixel(4 + x, 9 + y, 170, 169, 169);
	gfx.PutPixel(5 + x, 9 + y, 170, 169, 169);
	gfx.PutPixel(6 + x, 9 + y, 170, 169, 169);
	gfx.PutPixel(7 + x, 9 + y, 170, 169, 169);
	gfx.PutPixel(8 + x, 9 + y, 170, 169, 169);
	gfx.PutPixel(9 + x, 9 + y, 170, 169, 169);
	gfx.PutPixel(10 + x, 9 + y, 170, 169, 169);
	gfx.PutPixel(11 + x, 9 + y, 170, 169, 169);
	gfx.PutPixel(12 + x, 9 + y, 170, 169, 169);
	gfx.PutPixel(13 + x, 9 + y, 22, 22, 22);
	gfx.PutPixel(14 + x, 9 + y, 170, 169, 169);
	gfx.PutPixel(15 + x, 9 + y, 255, 254, 253);
	gfx.PutPixel(2 + x, 10 + y, 170, 169, 169);
	gfx.PutPixel(3 + x, 10 + y, 170, 169, 169);
	gfx.PutPixel(4 + x, 10 + y, 170, 169, 169);
	gfx.PutPixel(5 + x, 10 + y, 22, 22, 22);
	gfx.PutPixel(6 + x, 10 + y, 170, 169, 169);
	gfx.PutPixel(7 + x, 10 + y, 170, 169, 169);
	gfx.PutPixel(8 + x, 10 + y, 170, 169, 169);
	gfx.PutPixel(9 + x, 10 + y, 170, 169, 169);
	gfx.PutPixel(10 + x, 10 + y, 170, 169, 169);
	gfx.PutPixel(11 + x, 10 + y, 22, 22, 22);
	gfx.PutPixel(12 + x, 10 + y, 170, 169, 169);
	gfx.PutPixel(13 + x, 10 + y, 170, 169, 169);
	gfx.PutPixel(14 + x, 10 + y, 170, 169, 169);
	gfx.PutPixel(2 + x, 11 + y, 255, 254, 253);
	gfx.PutPixel(3 + x, 11 + y, 170, 169, 169);
	gfx.PutPixel(4 + x, 11 + y, 22, 22, 22);
	gfx.PutPixel(5 + x, 11 + y, 22, 22, 22);
	gfx.PutPixel(6 + x, 11 + y, 22, 22, 22);
	gfx.PutPixel(7 + x, 11 + y, 170, 169, 169);
	gfx.PutPixel(8 + x, 11 + y, 170, 169, 169);
	gfx.PutPixel(9 + x, 11 + y, 170, 169, 169);
	gfx.PutPixel(10 + x, 11 + y, 22, 22, 22);
	gfx.PutPixel(11 + x, 11 + y, 22, 22, 22);
	gfx.PutPixel(12 + x, 11 + y, 22, 22, 22);
	gfx.PutPixel(13 + x, 11 + y, 170, 169, 169);
	gfx.PutPixel(14 + x, 11 + y, 255, 254, 253);
	gfx.PutPixel(3 + x, 12 + y, 170, 169, 169);
	gfx.PutPixel(4 + x, 12 + y, 170, 169, 169);
	gfx.PutPixel(5 + x, 12 + y, 22, 22, 22);
	gfx.PutPixel(6 + x, 12 + y, 170, 169, 169);
	gfx.PutPixel(7 + x, 12 + y, 170, 169, 169);
	gfx.PutPixel(8 + x, 12 + y, 22, 22, 22);
	gfx.PutPixel(9 + x, 12 + y, 170, 169, 169);
	gfx.PutPixel(10 + x, 12 + y, 170, 169, 169);
	gfx.PutPixel(11 + x, 12 + y, 22, 22, 22);
	gfx.PutPixel(12 + x, 12 + y, 170, 169, 169);
	gfx.PutPixel(13 + x, 12 + y, 170, 169, 169);
	gfx.PutPixel(3 + x, 13 + y, 255, 254, 253);
	gfx.PutPixel(4 + x, 13 + y, 170, 169, 169);
	gfx.PutPixel(5 + x, 13 + y, 170, 169, 169);
	gfx.PutPixel(6 + x, 13 + y, 170, 169, 169);
	gfx.PutPixel(7 + x, 13 + y, 22, 22, 22);
	gfx.PutPixel(8 + x, 13 + y, 22, 22, 22);
	gfx.PutPixel(9 + x, 13 + y, 22, 22, 22);
	gfx.PutPixel(10 + x, 13 + y, 170, 169, 169);
	gfx.PutPixel(11 + x, 13 + y, 170, 169, 169);
	gfx.PutPixel(12 + x, 13 + y, 170, 169, 169);
	gfx.PutPixel(13 + x, 13 + y, 255, 254, 253);
	gfx.PutPixel(5 + x, 14 + y, 255, 254, 253);
	gfx.PutPixel(6 + x, 14 + y, 170, 169, 169);
	gfx.PutPixel(7 + x, 14 + y, 170, 169, 169);
	gfx.PutPixel(8 + x, 14 + y, 22, 22, 22);
	gfx.PutPixel(9 + x, 14 + y, 170, 169, 169);
	gfx.PutPixel(10 + x, 14 + y, 170, 169, 169);
	gfx.PutPixel(11 + x, 14 + y, 255, 254, 253);
	gfx.PutPixel(7 + x, 15 + y, 255, 254, 253);
	gfx.PutPixel(8 + x, 15 + y, 255, 254, 253);
	gfx.PutPixel(9 + x, 15 + y, 255, 254, 253);
}

void Bomb::MoveBomb()
{
	x = x + dx;
	y = y + dy;
}

bool Bomb::IsColliding(const Dude& dude) const
{
	const int left = x;
	const int right = x + size;
	const int top = y;
	const int bottom = y + size;

	return dude.GetX() + size >= left && dude.GetX() <= right && dude.GetY() + size >= top && dude.GetY() <= bottom;
}

void Bomb::Bounce(int xBounds, int yBounds)
{
	const int left = x;
	const int right = x + size;
	const int top = y;
	const int bottom = y + size;

	if (left < 0)
	{
		dx = -dx;
	}
	else if (right >= xBounds)
	{
		dx = -dx;
	}
	if (top < 0)
	{
		dy = -dy;
	}
	else if (bottom >= yBounds)
	{
		dy = -dy;
	}
}
