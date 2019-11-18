#include "Bomb.h"

void Bomb::Init(float posX, float posY, float dirX, float dirY)
{
	//Test
	x = posX;
	y = posY;
	dx = dirX;
	dy = dirY;
}

void Bomb::DrawBomb(Graphics& gfx) const
{
	const int x_int = int(x);
	const int y_int = int(y);

	gfx.PutPixel(7 + x_int, 1 + y_int, 255, 254, 253);
	gfx.PutPixel(8 + x_int, 1 + y_int, 255, 254, 253);
	gfx.PutPixel(9 + x_int, 1 + y_int, 255, 254, 253);
	gfx.PutPixel(5 + x_int, 2 + y_int, 255, 254, 253);
	gfx.PutPixel(6 + x_int, 2 + y_int, 170, 169, 169);
	gfx.PutPixel(7 + x_int, 2 + y_int, 170, 169, 169);
	gfx.PutPixel(8 + x_int, 2 + y_int, 22, 22, 22);
	gfx.PutPixel(9 + x_int, 2 + y_int, 170, 169, 169);
	gfx.PutPixel(10 + x_int, 2 + y_int, 170, 169, 169);
	gfx.PutPixel(11 + x_int, 2 + y_int, 255, 254, 253);
	gfx.PutPixel(3 + x_int, 3 + y_int, 255, 254, 253);
	gfx.PutPixel(4 + x_int, 3 + y_int, 170, 169, 169);
	gfx.PutPixel(5 + x_int, 3 + y_int, 22, 22, 22);
	gfx.PutPixel(6 + x_int, 3 + y_int, 170, 169, 169);
	gfx.PutPixel(7 + x_int, 3 + y_int, 22, 22, 22);
	gfx.PutPixel(8 + x_int, 3 + y_int, 22, 22, 22);
	gfx.PutPixel(9 + x_int, 3 + y_int, 22, 22, 22);
	gfx.PutPixel(10 + x_int, 3 + y_int, 170, 169, 169);
	gfx.PutPixel(11 + x_int, 3 + y_int, 22, 22, 22);
	gfx.PutPixel(12 + x_int, 3 + y_int, 170, 169, 169);
	gfx.PutPixel(13 + x_int, 3 + y_int, 255, 254, 253);
	gfx.PutPixel(3 + x_int, 4 + y_int, 170, 169, 169);
	gfx.PutPixel(4 + x_int, 4 + y_int, 22, 22, 22);
	gfx.PutPixel(5 + x_int, 4 + y_int, 22, 22, 22);
	gfx.PutPixel(6 + x_int, 4 + y_int, 22, 22, 22);
	gfx.PutPixel(7 + x_int, 4 + y_int, 170, 169, 169);
	gfx.PutPixel(8 + x_int, 4 + y_int, 22, 22, 22);
	gfx.PutPixel(9 + x_int, 4 + y_int, 170, 169, 169);
	gfx.PutPixel(10 + x_int, 4 + y_int, 22, 22, 22);
	gfx.PutPixel(11 + x_int, 4 + y_int, 22, 22, 22);
	gfx.PutPixel(12 + x_int, 4 + y_int, 22, 22, 22);
	gfx.PutPixel(13 + x_int, 4 + y_int, 170, 169, 169);
	gfx.PutPixel(2 + x_int, 5 + y_int, 255, 254, 253);
	gfx.PutPixel(3 + x_int, 5 + y_int, 170, 169, 169);
	gfx.PutPixel(4 + x_int, 5 + y_int, 170, 169, 169);
	gfx.PutPixel(5 + x_int, 5 + y_int, 22, 22, 22);
	gfx.PutPixel(6 + x_int, 5 + y_int, 170, 169, 169);
	gfx.PutPixel(7 + x_int, 5 + y_int, 170, 169, 169);
	gfx.PutPixel(8 + x_int, 5 + y_int, 170, 169, 169);
	gfx.PutPixel(9 + x_int, 5 + y_int, 170, 169, 169);
	gfx.PutPixel(10 + x_int, 5 + y_int, 170, 169, 169);
	gfx.PutPixel(11 + x_int, 5 + y_int, 22, 22, 22);
	gfx.PutPixel(12 + x_int, 5 + y_int, 170, 169, 169);
	gfx.PutPixel(13 + x_int, 5 + y_int, 170, 169, 169);
	gfx.PutPixel(14 + x_int, 5 + y_int, 255, 254, 253);
	gfx.PutPixel(2 + x_int, 6 + y_int, 170, 169, 169);
	gfx.PutPixel(3 + x_int, 6 + y_int, 170, 169, 169);
	gfx.PutPixel(4 + x_int, 6 + y_int, 170, 169, 169);
	gfx.PutPixel(5 + x_int, 6 + y_int, 170, 169, 169);
	gfx.PutPixel(6 + x_int, 6 + y_int, 170, 169, 169);
	gfx.PutPixel(7 + x_int, 6 + y_int, 170, 169, 169);
	gfx.PutPixel(8 + x_int, 6 + y_int, 22, 22, 22);
	gfx.PutPixel(9 + x_int, 6 + y_int, 170, 169, 169);
	gfx.PutPixel(10 + x_int, 6 + y_int, 170, 169, 169);
	gfx.PutPixel(11 + x_int, 6 + y_int, 170, 169, 169);
	gfx.PutPixel(12 + x_int, 6 + y_int, 170, 169, 169);
	gfx.PutPixel(13 + x_int, 6 + y_int, 170, 169, 169);
	gfx.PutPixel(14 + x_int, 6 + y_int, 170, 169, 169);
	gfx.PutPixel(1 + x_int, 7 + y_int, 255, 254, 253);
	gfx.PutPixel(2 + x_int, 7 + y_int, 170, 169, 169);
	gfx.PutPixel(3 + x_int, 7 + y_int, 22, 22, 22);
	gfx.PutPixel(4 + x_int, 7 + y_int, 170, 169, 169);
	gfx.PutPixel(5 + x_int, 7 + y_int, 170, 169, 169);
	gfx.PutPixel(6 + x_int, 7 + y_int, 170, 169, 169);
	gfx.PutPixel(7 + x_int, 7 + y_int, 22, 22, 22);
	gfx.PutPixel(8 + x_int, 7 + y_int, 22, 22, 22);
	gfx.PutPixel(9 + x_int, 7 + y_int, 22, 22, 22);
	gfx.PutPixel(10 + x_int, 7 + y_int, 170, 169, 169);
	gfx.PutPixel(11 + x_int, 7 + y_int, 170, 169, 169);
	gfx.PutPixel(12 + x_int, 7 + y_int, 170, 169, 169);
	gfx.PutPixel(13 + x_int, 7 + y_int, 22, 22, 22);
	gfx.PutPixel(14 + x_int, 7 + y_int, 170, 169, 169);
	gfx.PutPixel(15 + x_int, 7 + y_int, 255, 254, 253);
	gfx.PutPixel(1 + x_int, 8 + y_int, 255, 254, 253);
	gfx.PutPixel(2 + x_int, 8 + y_int, 22, 22, 22);
	gfx.PutPixel(3 + x_int, 8 + y_int, 22, 22, 22);
	gfx.PutPixel(4 + x_int, 8 + y_int, 22, 22, 22);
	gfx.PutPixel(5 + x_int, 8 + y_int, 170, 169, 169);
	gfx.PutPixel(6 + x_int, 8 + y_int, 170, 169, 169);
	gfx.PutPixel(7 + x_int, 8 + y_int, 170, 169, 169);
	gfx.PutPixel(8 + x_int, 8 + y_int, 22, 22, 22);
	gfx.PutPixel(9 + x_int, 8 + y_int, 170, 169, 169);
	gfx.PutPixel(10 + x_int, 8 + y_int, 170, 169, 169);
	gfx.PutPixel(11 + x_int, 8 + y_int, 170, 169, 169);
	gfx.PutPixel(12 + x_int, 8 + y_int, 22, 22, 22);
	gfx.PutPixel(13 + x_int, 8 + y_int, 22, 22, 22);
	gfx.PutPixel(14 + x_int, 8 + y_int, 22, 22, 22);
	gfx.PutPixel(15 + x_int, 8 + y_int, 255, 254, 253);
	gfx.PutPixel(1 + x_int, 9 + y_int, 255, 254, 253);
	gfx.PutPixel(2 + x_int, 9 + y_int, 170, 169, 169);
	gfx.PutPixel(3 + x_int, 9 + y_int, 22, 22, 22);
	gfx.PutPixel(4 + x_int, 9 + y_int, 170, 169, 169);
	gfx.PutPixel(5 + x_int, 9 + y_int, 170, 169, 169);
	gfx.PutPixel(6 + x_int, 9 + y_int, 170, 169, 169);
	gfx.PutPixel(7 + x_int, 9 + y_int, 170, 169, 169);
	gfx.PutPixel(8 + x_int, 9 + y_int, 170, 169, 169);
	gfx.PutPixel(9 + x_int, 9 + y_int, 170, 169, 169);
	gfx.PutPixel(10 + x_int, 9 + y_int, 170, 169, 169);
	gfx.PutPixel(11 + x_int, 9 + y_int, 170, 169, 169);
	gfx.PutPixel(12 + x_int, 9 + y_int, 170, 169, 169);
	gfx.PutPixel(13 + x_int, 9 + y_int, 22, 22, 22);
	gfx.PutPixel(14 + x_int, 9 + y_int, 170, 169, 169);
	gfx.PutPixel(15 + x_int, 9 + y_int, 255, 254, 253);
	gfx.PutPixel(2 + x_int, 10 + y_int, 170, 169, 169);
	gfx.PutPixel(3 + x_int, 10 + y_int, 170, 169, 169);
	gfx.PutPixel(4 + x_int, 10 + y_int, 170, 169, 169);
	gfx.PutPixel(5 + x_int, 10 + y_int, 22, 22, 22);
	gfx.PutPixel(6 + x_int, 10 + y_int, 170, 169, 169);
	gfx.PutPixel(7 + x_int, 10 + y_int, 170, 169, 169);
	gfx.PutPixel(8 + x_int, 10 + y_int, 170, 169, 169);
	gfx.PutPixel(9 + x_int, 10 + y_int, 170, 169, 169);
	gfx.PutPixel(10 + x_int, 10 + y_int, 170, 169, 169);
	gfx.PutPixel(11 + x_int, 10 + y_int, 22, 22, 22);
	gfx.PutPixel(12 + x_int, 10 + y_int, 170, 169, 169);
	gfx.PutPixel(13 + x_int, 10 + y_int, 170, 169, 169);
	gfx.PutPixel(14 + x_int, 10 + y_int, 170, 169, 169);
	gfx.PutPixel(2 + x_int, 11 + y_int, 255, 254, 253);
	gfx.PutPixel(3 + x_int, 11 + y_int, 170, 169, 169);
	gfx.PutPixel(4 + x_int, 11 + y_int, 22, 22, 22);
	gfx.PutPixel(5 + x_int, 11 + y_int, 22, 22, 22);
	gfx.PutPixel(6 + x_int, 11 + y_int, 22, 22, 22);
	gfx.PutPixel(7 + x_int, 11 + y_int, 170, 169, 169);
	gfx.PutPixel(8 + x_int, 11 + y_int, 170, 169, 169);
	gfx.PutPixel(9 + x_int, 11 + y_int, 170, 169, 169);
	gfx.PutPixel(10 + x_int, 11 + y_int, 22, 22, 22);
	gfx.PutPixel(11 + x_int, 11 + y_int, 22, 22, 22);
	gfx.PutPixel(12 + x_int, 11 + y_int, 22, 22, 22);
	gfx.PutPixel(13 + x_int, 11 + y_int, 170, 169, 169);
	gfx.PutPixel(14 + x_int, 11 + y_int, 255, 254, 253);
	gfx.PutPixel(3 + x_int, 12 + y_int, 170, 169, 169);
	gfx.PutPixel(4 + x_int, 12 + y_int, 170, 169, 169);
	gfx.PutPixel(5 + x_int, 12 + y_int, 22, 22, 22);
	gfx.PutPixel(6 + x_int, 12 + y_int, 170, 169, 169);
	gfx.PutPixel(7 + x_int, 12 + y_int, 170, 169, 169);
	gfx.PutPixel(8 + x_int, 12 + y_int, 22, 22, 22);
	gfx.PutPixel(9 + x_int, 12 + y_int, 170, 169, 169);
	gfx.PutPixel(10 + x_int, 12 + y_int, 170, 169, 169);
	gfx.PutPixel(11 + x_int, 12 + y_int, 22, 22, 22);
	gfx.PutPixel(12 + x_int, 12 + y_int, 170, 169, 169);
	gfx.PutPixel(13 + x_int, 12 + y_int, 170, 169, 169);
	gfx.PutPixel(3 + x_int, 13 + y_int, 255, 254, 253);
	gfx.PutPixel(4 + x_int, 13 + y_int, 170, 169, 169);
	gfx.PutPixel(5 + x_int, 13 + y_int, 170, 169, 169);
	gfx.PutPixel(6 + x_int, 13 + y_int, 170, 169, 169);
	gfx.PutPixel(7 + x_int, 13 + y_int, 22, 22, 22);
	gfx.PutPixel(8 + x_int, 13 + y_int, 22, 22, 22);
	gfx.PutPixel(9 + x_int, 13 + y_int, 22, 22, 22);
	gfx.PutPixel(10 + x_int, 13 + y_int, 170, 169, 169);
	gfx.PutPixel(11 + x_int, 13 + y_int, 170, 169, 169);
	gfx.PutPixel(12 + x_int, 13 + y_int, 170, 169, 169);
	gfx.PutPixel(13 + x_int, 13 + y_int, 255, 254, 253);
	gfx.PutPixel(5 + x_int, 14 + y_int, 255, 254, 253);
	gfx.PutPixel(6 + x_int, 14 + y_int, 170, 169, 169);
	gfx.PutPixel(7 + x_int, 14 + y_int, 170, 169, 169);
	gfx.PutPixel(8 + x_int, 14 + y_int, 22, 22, 22);
	gfx.PutPixel(9 + x_int, 14 + y_int, 170, 169, 169);
	gfx.PutPixel(10 + x_int, 14 + y_int, 170, 169, 169);
	gfx.PutPixel(11 + x_int, 14 + y_int, 255, 254, 253);
	gfx.PutPixel(7 + x_int, 15 + y_int, 255, 254, 253);
	gfx.PutPixel(8 + x_int, 15 + y_int, 255, 254, 253);
	gfx.PutPixel(9 + x_int, 15 + y_int, 255, 254, 253);
}

void Bomb::MoveBomb()
{
	x = x + dx;
	y = y + dy;
}

bool Bomb::IsColliding(const Dude& dude) const
{
	const float left = x;
	const float right = x + size;
	const float top = y;
	const float bottom = y + size;

	return (float)dude.GetX() + size >= left && (float)dude.GetX() <= right && (float)dude.GetY() + size >= top && (float)dude.GetY() <= bottom;
}

void Bomb::Bounce(float xBounds, float yBounds)
{
	const float left = x;
	const float right = x + size;
	const float top = y;
	const float bottom = y + size;

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
