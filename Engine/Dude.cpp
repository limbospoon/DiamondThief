#include "Dude.h"

Dude::Dude(int posX, int posY)
{
	x = posX;
	y = posY;
}

void Dude::DrawDude(Graphics& gfx)
{
	if (isInvincible)
	{
		currentColor = invincibleColor;
	}
	else
	{
		currentColor = normal;
	}

	gfx.PutPixel(7 + x, 1 + y, currentColor);
	gfx.PutPixel(8 + x, 1 + y, currentColor);
	gfx.PutPixel(9 + x, 1 + y, currentColor);
	gfx.PutPixel(5 + x, 2 + y, currentColor);
	gfx.PutPixel(6 + x, 2 + y, currentColor);
	gfx.PutPixel(7 + x, 2 + y, currentColor);
	gfx.PutPixel(8 + x, 2 + y, currentColor);
	gfx.PutPixel(9 + x, 2 + y, currentColor);
	gfx.PutPixel(10 + x, 2 + y, currentColor);
	gfx.PutPixel(11 + x, 2 + y, currentColor);
	gfx.PutPixel(3 + x, 3 + y, currentColor);
	gfx.PutPixel(4 + x, 3 + y, currentColor);
	gfx.PutPixel(5 + x, 3 + y, currentColor);
	gfx.PutPixel(6 + x, 3 + y, currentColor);
	gfx.PutPixel(7 + x, 3 + y, currentColor);
	gfx.PutPixel(8 + x, 3 + y, currentColor);
	gfx.PutPixel(9 + x, 3 + y, currentColor);
	gfx.PutPixel(10 + x, 3 + y, currentColor);
	gfx.PutPixel(11 + x, 3 + y, currentColor);
	gfx.PutPixel(12 + x, 3 + y, currentColor);
	gfx.PutPixel(13 + x, 3 + y, currentColor);
	gfx.PutPixel(3 + x, 4 + y, currentColor);
	gfx.PutPixel(4 + x, 4 + y, 39, 29, 1);
	gfx.PutPixel(5 + x, 4 + y, 39, 29, 1);
	gfx.PutPixel(6 + x, 4 + y, 39, 29, 1);
	gfx.PutPixel(7 + x, 4 + y, currentColor);
	gfx.PutPixel(8 + x, 4 + y, currentColor);
	gfx.PutPixel(9 + x, 4 + y, currentColor);
	gfx.PutPixel(10 + x, 4 + y, 39, 29, 1);
	gfx.PutPixel(11 + x, 4 + y, 39, 29, 1);
	gfx.PutPixel(12 + x, 4 + y, 39, 29, 1);
	gfx.PutPixel(13 + x, 4 + y, currentColor);
	gfx.PutPixel(2 + x, 5 + y, currentColor);
	gfx.PutPixel(3 + x, 5 + y, currentColor);
	gfx.PutPixel(4 + x, 5 + y, 39, 29, 1);
	gfx.PutPixel(5 + x, 5 + y, 39, 29, 1);
	gfx.PutPixel(6 + x, 5 + y, 39, 29, 1);
	gfx.PutPixel(7 + x, 5 + y, currentColor);
	gfx.PutPixel(8 + x, 5 + y, currentColor);
	gfx.PutPixel(9 + x, 5 + y, currentColor);
	gfx.PutPixel(10 + x, 5 + y, 39, 29, 1);
	gfx.PutPixel(11 + x, 5 + y, 39, 29, 1);
	gfx.PutPixel(12 + x, 5 + y, 39, 29, 1);
	gfx.PutPixel(13 + x, 5 + y, currentColor);
	gfx.PutPixel(14 + x, 5 + y, currentColor);
	gfx.PutPixel(2 + x, 6 + y, currentColor);
	gfx.PutPixel(3 + x, 6 + y, currentColor);
	gfx.PutPixel(4 + x, 6 + y, 39, 29, 1);
	gfx.PutPixel(5 + x, 6 + y, 39, 29, 1);
	gfx.PutPixel(6 + x, 6 + y, 39, 29, 1);
	gfx.PutPixel(7 + x, 6 + y, currentColor);
	gfx.PutPixel(8 + x, 6 + y, currentColor);
	gfx.PutPixel(9 + x, 6 + y, currentColor);
	gfx.PutPixel(10 + x, 6 + y, 39, 29, 1);
	gfx.PutPixel(11 + x, 6 + y, 39, 29, 1);
	gfx.PutPixel(12 + x, 6 + y, 39, 29, 1);
	gfx.PutPixel(13 + x, 6 + y, currentColor);
	gfx.PutPixel(14 + x, 6 + y, currentColor);
	gfx.PutPixel(1 + x, 7 + y, currentColor);
	gfx.PutPixel(2 + x, 7 + y, currentColor);
	gfx.PutPixel(3 + x, 7 + y, currentColor);
	gfx.PutPixel(4 + x, 7 + y, currentColor);
	gfx.PutPixel(5 + x, 7 + y, currentColor);
	gfx.PutPixel(6 + x, 7 + y, currentColor);
	gfx.PutPixel(7 + x, 7 + y, currentColor);
	gfx.PutPixel(8 + x, 7 + y, currentColor);
	gfx.PutPixel(9 + x, 7 + y, currentColor);
	gfx.PutPixel(10 + x, 7 + y, currentColor);
	gfx.PutPixel(11 + x, 7 + y, currentColor);
	gfx.PutPixel(12 + x, 7 + y, currentColor);
	gfx.PutPixel(13 + x, 7 + y, currentColor);
	gfx.PutPixel(14 + x, 7 + y, currentColor);
	gfx.PutPixel(15 + x, 7 + y, currentColor);
	gfx.PutPixel(1 + x, 8 + y, currentColor);
	gfx.PutPixel(2 + x, 8 + y, currentColor);
	gfx.PutPixel(3 + x, 8 + y, currentColor);
	gfx.PutPixel(4 + x, 8 + y, currentColor);
	gfx.PutPixel(5 + x, 8 + y, currentColor);
	gfx.PutPixel(6 + x, 8 + y, currentColor);
	gfx.PutPixel(7 + x, 8 + y, currentColor);
	gfx.PutPixel(8 + x, 8 + y, currentColor);
	gfx.PutPixel(9 + x, 8 + y, currentColor);
	gfx.PutPixel(10 + x, 8 + y, currentColor);
	gfx.PutPixel(11 + x, 8 + y, currentColor);
	gfx.PutPixel(12 + x, 8 + y, currentColor);
	gfx.PutPixel(13 + x, 8 + y, currentColor);
	gfx.PutPixel(14 + x, 8 + y, currentColor);
	gfx.PutPixel(15 + x, 8 + y, currentColor);
	gfx.PutPixel(1 + x, 9 + y, currentColor);
	gfx.PutPixel(2 + x, 9 + y, currentColor);
	gfx.PutPixel(3 + x, 9 + y, currentColor);
	gfx.PutPixel(4 + x, 9 + y, currentColor);
	gfx.PutPixel(5 + x, 9 + y, currentColor);
	gfx.PutPixel(6 + x, 9 + y, currentColor);
	gfx.PutPixel(7 + x, 9 + y, currentColor);
	gfx.PutPixel(8 + x, 9 + y, currentColor);
	gfx.PutPixel(9 + x, 9 + y, currentColor);
	gfx.PutPixel(10 + x, 9 + y, currentColor);
	gfx.PutPixel(11 + x, 9 + y, currentColor);
	gfx.PutPixel(12 + x, 9 + y, currentColor);
	gfx.PutPixel(13 + x, 9 + y, currentColor);
	gfx.PutPixel(14 + x, 9 + y, currentColor);
	gfx.PutPixel(15 + x, 9 + y, currentColor);
	gfx.PutPixel(2 + x, 10 + y, currentColor);
	gfx.PutPixel(3 + x, 10 + y, currentColor);
	gfx.PutPixel(4 + x, 10 + y, currentColor);
	gfx.PutPixel(5 + x, 10 + y, 39, 29, 1);
	gfx.PutPixel(6 + x, 10 + y, currentColor);
	gfx.PutPixel(7 + x, 10 + y, currentColor);
	gfx.PutPixel(8 + x, 10 + y, currentColor);
	gfx.PutPixel(9 + x, 10 + y, currentColor);
	gfx.PutPixel(10 + x, 10 + y, currentColor);
	gfx.PutPixel(11 + x, 10 + y, 39, 29, 1);
	gfx.PutPixel(12 + x, 10 + y, currentColor);
	gfx.PutPixel(13 + x, 10 + y, currentColor);
	gfx.PutPixel(14 + x, 10 + y, currentColor);
	gfx.PutPixel(2 + x, 11 + y, currentColor);
	gfx.PutPixel(3 + x, 11 + y, currentColor);
	gfx.PutPixel(4 + x, 11 + y, 39, 29, 1);
	gfx.PutPixel(5 + x, 11 + y, 39, 29, 1);
	gfx.PutPixel(6 + x, 11 + y, 39, 29, 1);
	gfx.PutPixel(7 + x, 11 + y, 39, 29, 1);
	gfx.PutPixel(8 + x, 11 + y, 39, 29, 1);
	gfx.PutPixel(9 + x, 11 + y, 39, 29, 1);
	gfx.PutPixel(10 + x, 11 + y, 39, 29, 1);
	gfx.PutPixel(11 + x, 11 + y, 39, 29, 1);
	gfx.PutPixel(12 + x, 11 + y, 39, 29, 1);
	gfx.PutPixel(13 + x, 11 + y, currentColor);
	gfx.PutPixel(14 + x, 11 + y, currentColor);
	gfx.PutPixel(3 + x, 12 + y, currentColor);
	gfx.PutPixel(4 + x, 12 + y, currentColor);
	gfx.PutPixel(5 + x, 12 + y, 39, 29, 1);
	gfx.PutPixel(6 + x, 12 + y, 39, 29, 1);
	gfx.PutPixel(7 + x, 12 + y, 253, 0, 0);
	gfx.PutPixel(8 + x, 12 + y, 253, 0, 0);
	gfx.PutPixel(9 + x, 12 + y, 253, 0, 0);
	gfx.PutPixel(10 + x, 12 + y, 39, 29, 1);
	gfx.PutPixel(11 + x, 12 + y, 39, 29, 1);
	gfx.PutPixel(12 + x, 12 + y, currentColor);
	gfx.PutPixel(13 + x, 12 + y, currentColor);
	gfx.PutPixel(3 + x, 13 + y, currentColor);
	gfx.PutPixel(4 + x, 13 + y, currentColor);
	gfx.PutPixel(5 + x, 13 + y, currentColor);
	gfx.PutPixel(6 + x, 13 + y, currentColor);
	gfx.PutPixel(7 + x, 13 + y, 39, 29, 1);
	gfx.PutPixel(8 + x, 13 + y, 39, 29, 1);
	gfx.PutPixel(9 + x, 13 + y, 39, 29, 1);
	gfx.PutPixel(10 + x, 13 + y, currentColor);
	gfx.PutPixel(11 + x, 13 + y, currentColor);
	gfx.PutPixel(12 + x, 13 + y, currentColor);
	gfx.PutPixel(13 + x, 13 + y, currentColor);
	gfx.PutPixel(5 + x, 14 + y, currentColor);
	gfx.PutPixel(6 + x, 14 + y, currentColor);
	gfx.PutPixel(7 + x, 14 + y, currentColor);
	gfx.PutPixel(8 + x, 14 + y, currentColor);
	gfx.PutPixel(9 + x, 14 + y, currentColor);
	gfx.PutPixel(10 + x, 14 + y, currentColor);
	gfx.PutPixel(11 + x, 14 + y, currentColor);
	gfx.PutPixel(7 + x, 15 + y, currentColor);
	gfx.PutPixel(8 + x, 15 + y, currentColor);
	gfx.PutPixel(9 + x, 15 + y, currentColor);
	
}

void Dude::MoveDude(int dx, int dy)
{
	moved = true;
	x = x + dx;
	y = y + dy;

	if (x < 0)
	{
		x = 0;
	}
	else if (x + size >= Graphics::ScreenWidth)
	{
		x = Graphics::ScreenWidth - size;
	}

	if(y < 0)
	{
		y = 0;
	}
	else if (y + size >= Graphics::ScreenHeight)
	{
		y = Graphics::ScreenHeight - size;
	}
}

void Dude::Reset()
{
	isInvincible = true;
	moved = false;
	x = startX;
	y = startY;
}

void Dude::Invincibility()
{
	if (x == startX && y == startY && !moved)
	{
		isInvincible = true;
	}
	else
	{
		isInvincible = false;
	}
}

bool Dude::GetInvincibility()
{
	return isInvincible;
}

int Dude::GetX() const
{
	return x;
}

int Dude::GetY() const
{
	return y;
}
