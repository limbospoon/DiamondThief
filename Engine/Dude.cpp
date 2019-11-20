#include "Dude.h"

Dude::Dude(float posX, float posY)
{
	x = posX;
	y = posY;
}

void Dude::DrawDude(Graphics& gfx)
{
	const float in_x = x;
	const float in_y = y;

	gfx.PutPixel(7 + in_x, 1 + in_y, currentColor);
	gfx.PutPixel(8 + in_x, 1 + in_y, currentColor);
	gfx.PutPixel(9 + in_x, 1 + in_y, currentColor);
	gfx.PutPixel(5 + in_x, 2 + in_y, currentColor);
	gfx.PutPixel(6 + in_x, 2 + in_y, currentColor);
	gfx.PutPixel(7 + in_x, 2 + in_y, currentColor);
	gfx.PutPixel(8 + in_x, 2 + in_y, currentColor);
	gfx.PutPixel(9 + in_x, 2 + in_y, currentColor);
	gfx.PutPixel(10 + in_x, 2 + in_y, currentColor);
	gfx.PutPixel(11 + in_x, 2 + in_y, currentColor);
	gfx.PutPixel(3 + in_x, 3 + in_y, currentColor);
	gfx.PutPixel(4 + in_x, 3 + in_y, currentColor);
	gfx.PutPixel(5 + in_x, 3 + in_y, currentColor);
	gfx.PutPixel(6 + in_x, 3 + in_y, currentColor);
	gfx.PutPixel(7 + in_x, 3 + in_y, currentColor);
	gfx.PutPixel(8 + in_x, 3 + in_y, currentColor);
	gfx.PutPixel(9 + in_x, 3 + in_y, currentColor);
	gfx.PutPixel(10 + in_x, 3 + in_y, currentColor);
	gfx.PutPixel(11 + in_x, 3 + in_y, currentColor);
	gfx.PutPixel(12 + in_x, 3 + in_y, currentColor);
	gfx.PutPixel(13 + in_x, 3 + in_y, currentColor);
	gfx.PutPixel(3 + in_x, 4 + in_y, currentColor);
	gfx.PutPixel(4 + in_x, 4 + in_y, 39, 29, 1);
	gfx.PutPixel(5 + in_x, 4 + in_y, 39, 29, 1);
	gfx.PutPixel(6 + in_x, 4 + in_y, 39, 29, 1);
	gfx.PutPixel(7 + in_x, 4 + in_y, currentColor);
	gfx.PutPixel(8 + in_x, 4 + in_y, currentColor);
	gfx.PutPixel(9 + in_x, 4 + in_y, currentColor);
	gfx.PutPixel(10 + in_x, 4 + in_y, 39, 29, 1);
	gfx.PutPixel(11 + in_x, 4 + in_y, 39, 29, 1);
	gfx.PutPixel(12 + in_x, 4 + in_y, 39, 29, 1);
	gfx.PutPixel(13 + in_x, 4 + in_y, currentColor);
	gfx.PutPixel(2 + in_x, 5 + in_y, currentColor);
	gfx.PutPixel(3 + in_x, 5 + in_y, currentColor);
	gfx.PutPixel(4 + in_x, 5 + in_y, 39, 29, 1);
	gfx.PutPixel(5 + in_x, 5 + in_y, 39, 29, 1);
	gfx.PutPixel(6 + in_x, 5 + in_y, 39, 29, 1);
	gfx.PutPixel(7 + in_x, 5 + in_y, currentColor);
	gfx.PutPixel(8 + in_x, 5 + in_y, currentColor);
	gfx.PutPixel(9 + in_x, 5 + in_y, currentColor);
	gfx.PutPixel(10 + in_x, 5 + in_y, 39, 29, 1);
	gfx.PutPixel(11 + in_x, 5 + in_y, 39, 29, 1);
	gfx.PutPixel(12 + in_x, 5 + in_y, 39, 29, 1);
	gfx.PutPixel(13 + in_x, 5 + in_y, currentColor);
	gfx.PutPixel(14 + in_x, 5 + in_y, currentColor);
	gfx.PutPixel(2 + in_x, 6 + in_y, currentColor);
	gfx.PutPixel(3 + in_x, 6 + in_y, currentColor);
	gfx.PutPixel(4 + in_x, 6 + in_y, 39, 29, 1);
	gfx.PutPixel(5 + in_x, 6 + in_y, 39, 29, 1);
	gfx.PutPixel(6 + in_x, 6 + in_y, 39, 29, 1);
	gfx.PutPixel(7 + in_x, 6 + in_y, currentColor);
	gfx.PutPixel(8 + in_x, 6 + in_y, currentColor);
	gfx.PutPixel(9 + in_x, 6 + in_y, currentColor);
	gfx.PutPixel(10 + in_x, 6 + in_y, 39, 29, 1);
	gfx.PutPixel(11 + in_x, 6 + in_y, 39, 29, 1);
	gfx.PutPixel(12 + in_x, 6 + in_y, 39, 29, 1);
	gfx.PutPixel(13 + in_x, 6 + in_y, currentColor);
	gfx.PutPixel(14 + in_x, 6 + in_y, currentColor);
	gfx.PutPixel(1 + in_x, 7 + in_y, currentColor);
	gfx.PutPixel(2 + in_x, 7 + in_y, currentColor);
	gfx.PutPixel(3 + in_x, 7 + in_y, currentColor);
	gfx.PutPixel(4 + in_x, 7 + in_y, currentColor);
	gfx.PutPixel(5 + in_x, 7 + in_y, currentColor);
	gfx.PutPixel(6 + in_x, 7 + in_y, currentColor);
	gfx.PutPixel(7 + in_x, 7 + in_y, currentColor);
	gfx.PutPixel(8 + in_x, 7 + in_y, currentColor);
	gfx.PutPixel(9 + in_x, 7 + in_y, currentColor);
	gfx.PutPixel(10 + in_x, 7 + in_y, currentColor);
	gfx.PutPixel(11 + in_x, 7 + in_y, currentColor);
	gfx.PutPixel(12 + in_x, 7 + in_y, currentColor);
	gfx.PutPixel(13 + in_x, 7 + in_y, currentColor);
	gfx.PutPixel(14 + in_x, 7 + in_y, currentColor);
	gfx.PutPixel(15 + in_x, 7 + in_y, currentColor);
	gfx.PutPixel(1 + in_x, 8 + in_y, currentColor);
	gfx.PutPixel(2 + in_x, 8 + in_y, currentColor);
	gfx.PutPixel(3 + in_x, 8 + in_y, currentColor);
	gfx.PutPixel(4 + in_x, 8 + in_y, currentColor);
	gfx.PutPixel(5 + in_x, 8 + in_y, currentColor);
	gfx.PutPixel(6 + in_x, 8 + in_y, currentColor);
	gfx.PutPixel(7 + in_x, 8 + in_y, currentColor);
	gfx.PutPixel(8 + in_x, 8 + in_y, currentColor);
	gfx.PutPixel(9 + in_x, 8 + in_y, currentColor);
	gfx.PutPixel(10 + in_x, 8 + in_y, currentColor);
	gfx.PutPixel(11 + in_x, 8 + in_y, currentColor);
	gfx.PutPixel(12 + in_x, 8 + in_y, currentColor);
	gfx.PutPixel(13 + in_x, 8 + in_y, currentColor);
	gfx.PutPixel(14 + in_x, 8 + in_y, currentColor);
	gfx.PutPixel(15 + in_x, 8 + in_y, currentColor);
	gfx.PutPixel(1 + in_x, 9 + in_y, currentColor);
	gfx.PutPixel(2 + in_x, 9 + in_y, currentColor);
	gfx.PutPixel(3 + in_x, 9 + in_y, currentColor);
	gfx.PutPixel(4 + in_x, 9 + in_y, currentColor);
	gfx.PutPixel(5 + in_x, 9 + in_y, currentColor);
	gfx.PutPixel(6 + in_x, 9 + in_y, currentColor);
	gfx.PutPixel(7 + in_x, 9 + in_y, currentColor);
	gfx.PutPixel(8 + in_x, 9 + in_y, currentColor);
	gfx.PutPixel(9 + in_x, 9 + in_y, currentColor);
	gfx.PutPixel(10 + in_x, 9 + in_y, currentColor);
	gfx.PutPixel(11 + in_x, 9 + in_y, currentColor);
	gfx.PutPixel(12 + in_x, 9 + in_y, currentColor);
	gfx.PutPixel(13 + in_x, 9 + in_y, currentColor);
	gfx.PutPixel(14 + in_x, 9 + in_y, currentColor);
	gfx.PutPixel(15 + in_x, 9 + in_y, currentColor);
	gfx.PutPixel(2 + in_x, 10 + in_y, currentColor);
	gfx.PutPixel(3 + in_x, 10 + in_y, currentColor);
	gfx.PutPixel(4 + in_x, 10 + in_y, currentColor);
	gfx.PutPixel(5 + in_x, 10 + in_y, 39, 29, 1);
	gfx.PutPixel(6 + in_x, 10 + in_y, currentColor);
	gfx.PutPixel(7 + in_x, 10 + in_y, currentColor);
	gfx.PutPixel(8 + in_x, 10 + in_y, currentColor);
	gfx.PutPixel(9 + in_x, 10 + in_y, currentColor);
	gfx.PutPixel(10 + in_x, 10 + in_y, currentColor);
	gfx.PutPixel(11 + in_x, 10 + in_y, 39, 29, 1);
	gfx.PutPixel(12 + in_x, 10 + in_y, currentColor);
	gfx.PutPixel(13 + in_x, 10 + in_y, currentColor);
	gfx.PutPixel(14 + in_x, 10 + in_y, currentColor);
	gfx.PutPixel(2 + in_x, 11 + in_y, currentColor);
	gfx.PutPixel(3 + in_x, 11 + in_y, currentColor);
	gfx.PutPixel(4 + in_x, 11 + in_y, 39, 29, 1);
	gfx.PutPixel(5 + in_x, 11 + in_y, 39, 29, 1);
	gfx.PutPixel(6 + in_x, 11 + in_y, 39, 29, 1);
	gfx.PutPixel(7 + in_x, 11 + in_y, 39, 29, 1);
	gfx.PutPixel(8 + in_x, 11 + in_y, 39, 29, 1);
	gfx.PutPixel(9 + in_x, 11 + in_y, 39, 29, 1);
	gfx.PutPixel(10 + in_x, 11 + in_y, 39, 29, 1);
	gfx.PutPixel(11 + in_x, 11 + in_y, 39, 29, 1);
	gfx.PutPixel(12 + in_x, 11 + in_y, 39, 29, 1);
	gfx.PutPixel(13 + in_x, 11 + in_y, currentColor);
	gfx.PutPixel(14 + in_x, 11 + in_y, currentColor);
	gfx.PutPixel(3 + in_x, 12 + in_y, currentColor);
	gfx.PutPixel(4 + in_x, 12 + in_y, currentColor);
	gfx.PutPixel(5 + in_x, 12 + in_y, 39, 29, 1);
	gfx.PutPixel(6 + in_x, 12 + in_y, 39, 29, 1);
	gfx.PutPixel(7 + in_x, 12 + in_y, 253, 0, 0);
	gfx.PutPixel(8 + in_x, 12 + in_y, 253, 0, 0);
	gfx.PutPixel(9 + in_x, 12 + in_y, 253, 0, 0);
	gfx.PutPixel(10 + in_x, 12 + in_y, 39, 29, 1);
	gfx.PutPixel(11 + in_x, 12 + in_y, 39, 29, 1);
	gfx.PutPixel(12 + in_x, 12 + in_y, currentColor);
	gfx.PutPixel(13 + in_x, 12 + in_y, currentColor);
	gfx.PutPixel(3 + in_x, 13 + in_y, currentColor);
	gfx.PutPixel(4 + in_x, 13 + in_y, currentColor);
	gfx.PutPixel(5 + in_x, 13 + in_y, currentColor);
	gfx.PutPixel(6 + in_x, 13 + in_y, currentColor);
	gfx.PutPixel(7 + in_x, 13 + in_y, 39, 29, 1);
	gfx.PutPixel(8 + in_x, 13 + in_y, 39, 29, 1);
	gfx.PutPixel(9 + in_x, 13 + in_y, 39, 29, 1);
	gfx.PutPixel(10 + in_x, 13 + in_y, currentColor);
	gfx.PutPixel(11 + in_x, 13 + in_y, currentColor);
	gfx.PutPixel(12 + in_x, 13 + in_y, currentColor);
	gfx.PutPixel(13 + in_x, 13 + in_y, currentColor);
	gfx.PutPixel(5 + in_x, 14 + in_y, currentColor);
	gfx.PutPixel(6 + in_x, 14 + in_y, currentColor);
	gfx.PutPixel(7 + in_x, 14 + in_y, currentColor);
	gfx.PutPixel(8 + in_x, 14 + in_y, currentColor);
	gfx.PutPixel(9 + in_x, 14 + in_y, currentColor);
	gfx.PutPixel(10 + in_x, 14 + in_y, currentColor);
	gfx.PutPixel(11 + in_x, 14 + in_y, currentColor);
	gfx.PutPixel(7 + in_x, 15 + in_y, currentColor);
	gfx.PutPixel(8 + in_x, 15 + in_y, currentColor);
	gfx.PutPixel(9 + in_x, 15 + in_y, currentColor);
	
}

void Dude::MoveDude(float dx, float dy, float deltaTime)
{
	x += dx * deltaTime * 60.0f;
	y += dy * deltaTime * 60.0f;

	if (x < 0.0f)
	{
		x = 0.0f;
	}
	else if (x + size >= (float)Graphics::ScreenWidth)
	{
		x = (float)(Graphics::ScreenWidth - 1) - size;
	}

	if(y < 0.0f)
	{
		y = 0.0f;
	}
	else if (y + size >= (float)Graphics::ScreenHeight)
	{
		y = (float)(Graphics::ScreenHeight - 1) - size;
	}
}

void Dude::Reset()
{
	x = startX;
	y = startY;
}

float Dude::GetX() const
{
	return x;
}

float Dude::GetY() const
{
	return y;
}
