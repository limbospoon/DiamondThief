#include "Diamond.h"

Diamond::Diamond(int posX, int posY)
{
	x = posX;
	y = posY;
}

void Diamond::DrawDiamond(Graphics& gfx) const
{
	gfx.PutPixel(6 + x, 2 + y, 254, 254, 254);
	gfx.PutPixel(7 + x, 2 + y, 254, 254, 254);
	gfx.PutPixel(8 + x, 2 + y, 253, 253, 253);
	gfx.PutPixel(9 + x, 2 + y, 254, 254, 254);
	gfx.PutPixel(10 + x, 2 + y, 254, 254, 254);
	gfx.PutPixel(4 + x, 3 + y, 254, 254, 254);
	gfx.PutPixel(5 + x, 3 + y, 253, 253, 253);
	gfx.PutPixel(6 + x, 3 + y, 254, 254, 254);
	gfx.PutPixel(7 + x, 3 + y, 253, 253, 253);
	gfx.PutPixel(8 + x, 3 + y, 253, 253, 253);
	gfx.PutPixel(9 + x, 3 + y, 253, 253, 253);
	gfx.PutPixel(10 + x, 3 + y, 254, 254, 254);
	gfx.PutPixel(11 + x, 3 + y, 253, 253, 253);
	gfx.PutPixel(12 + x, 3 + y, 254, 254, 254);
	gfx.PutPixel(3 + x, 4 + y, 254, 254, 254);
	gfx.PutPixel(4 + x, 4 + y, 253, 253, 253);
	gfx.PutPixel(5 + x, 4 + y, 253, 253, 253);
	gfx.PutPixel(6 + x, 4 + y, 253, 253, 253);
	gfx.PutPixel(7 + x, 4 + y, 254, 254, 254);
	gfx.PutPixel(8 + x, 4 + y, 253, 253, 253);
	gfx.PutPixel(9 + x, 4 + y, 254, 254, 254);
	gfx.PutPixel(10 + x, 4 + y, 253, 253, 253);
	gfx.PutPixel(11 + x, 4 + y, 253, 253, 253);
	gfx.PutPixel(12 + x, 4 + y, 253, 253, 253);
	gfx.PutPixel(13 + x, 4 + y, 254, 254, 254);
	gfx.PutPixel(3 + x, 5 + y, 254, 254, 254);
	gfx.PutPixel(4 + x, 5 + y, 254, 254, 254);
	gfx.PutPixel(5 + x, 5 + y, 50, 255, 239);
	gfx.PutPixel(6 + x, 5 + y, 64, 255, 239);
	gfx.PutPixel(7 + x, 5 + y, 64, 255, 239);
	gfx.PutPixel(8 + x, 5 + y, 64, 255, 239);
	gfx.PutPixel(9 + x, 5 + y, 64, 255, 239);
	gfx.PutPixel(10 + x, 5 + y, 64, 255, 239);
	gfx.PutPixel(11 + x, 5 + y, 63, 255, 239);
	gfx.PutPixel(12 + x, 5 + y, 254, 254, 254);
	gfx.PutPixel(13 + x, 5 + y, 254, 254, 254);
	gfx.PutPixel(2 + x, 6 + y, 254, 254, 254);
	gfx.PutPixel(3 + x, 6 + y, 254, 254, 254);
	gfx.PutPixel(4 + x, 6 + y, 50, 255, 239);
	gfx.PutPixel(5 + x, 6 + y, 50, 255, 239);
	gfx.PutPixel(6 + x, 6 + y, 50, 255, 239);
	gfx.PutPixel(7 + x, 6 + y, 50, 255, 239);
	gfx.PutPixel(8 + x, 6 + y, 50, 255, 239);
	gfx.PutPixel(9 + x, 6 + y, 50, 255, 239);
	gfx.PutPixel(10 + x, 6 + y, 25, 140, 131);
	gfx.PutPixel(11 + x, 6 + y, 50, 255, 239);
	gfx.PutPixel(12 + x, 6 + y, 50, 255, 239);
	gfx.PutPixel(13 + x, 6 + y, 254, 254, 254);
	gfx.PutPixel(14 + x, 6 + y, 254, 254, 254);
	gfx.PutPixel(2 + x, 7 + y, 254, 254, 254);
	gfx.PutPixel(3 + x, 7 + y, 50, 255, 239);
	gfx.PutPixel(4 + x, 7 + y, 50, 255, 239);
	gfx.PutPixel(5 + x, 7 + y, 25, 140, 131);
	gfx.PutPixel(6 + x, 7 + y, 50, 255, 239);
	gfx.PutPixel(7 + x, 7 + y, 50, 255, 239);
	gfx.PutPixel(8 + x, 7 + y, 50, 255, 239);
	gfx.PutPixel(9 + x, 7 + y, 50, 255, 239);
	gfx.PutPixel(10 + x, 7 + y, 50, 255, 239);
	gfx.PutPixel(11 + x, 7 + y, 50, 255, 239);
	gfx.PutPixel(12 + x, 7 + y, 50, 255, 239);
	gfx.PutPixel(13 + x, 7 + y, 50, 255, 239);
	gfx.PutPixel(14 + x, 7 + y, 254, 254, 254);
	gfx.PutPixel(2 + x, 8 + y, 63, 255, 239);
	gfx.PutPixel(3 + x, 8 + y, 50, 255, 239);
	gfx.PutPixel(4 + x, 8 + y, 50, 255, 239);
	gfx.PutPixel(5 + x, 8 + y, 50, 255, 239);
	gfx.PutPixel(6 + x, 8 + y, 50, 255, 239);
	gfx.PutPixel(7 + x, 8 + y, 25, 140, 131);
	gfx.PutPixel(8 + x, 8 + y, 50, 255, 239);
	gfx.PutPixel(9 + x, 8 + y, 50, 255, 239);
	gfx.PutPixel(10 + x, 8 + y, 50, 255, 239);
	gfx.PutPixel(11 + x, 8 + y, 50, 255, 239);
	gfx.PutPixel(12 + x, 8 + y, 25, 140, 131);
	gfx.PutPixel(13 + x, 8 + y, 50, 255, 239);
	gfx.PutPixel(14 + x, 8 + y, 63, 255, 239);
	gfx.PutPixel(2 + x, 9 + y, 64, 255, 239);
	gfx.PutPixel(3 + x, 9 + y, 50, 255, 239);
	gfx.PutPixel(4 + x, 9 + y, 25, 140, 131);
	gfx.PutPixel(5 + x, 9 + y, 50, 255, 239);
	gfx.PutPixel(6 + x, 9 + y, 50, 255, 239);
	gfx.PutPixel(7 + x, 9 + y, 50, 255, 239);
	gfx.PutPixel(8 + x, 9 + y, 50, 255, 239);
	gfx.PutPixel(9 + x, 9 + y, 50, 255, 239);
	gfx.PutPixel(10 + x, 9 + y, 50, 255, 239);
	gfx.PutPixel(11 + x, 9 + y, 50, 255, 239);
	gfx.PutPixel(12 + x, 9 + y, 50, 255, 239);
	gfx.PutPixel(13 + x, 9 + y, 50, 255, 239);
	gfx.PutPixel(14 + x, 9 + y, 64, 255, 239);
	gfx.PutPixel(2 + x, 10 + y, 254, 254, 254);
	gfx.PutPixel(3 + x, 10 + y, 50, 255, 239);
	gfx.PutPixel(4 + x, 10 + y, 50, 255, 239);
	gfx.PutPixel(5 + x, 10 + y, 50, 255, 239);
	gfx.PutPixel(6 + x, 10 + y, 50, 255, 239);
	gfx.PutPixel(7 + x, 10 + y, 50, 255, 239);
	gfx.PutPixel(8 + x, 10 + y, 50, 255, 239);
	gfx.PutPixel(9 + x, 10 + y, 50, 255, 239);
	gfx.PutPixel(10 + x, 10 + y, 25, 140, 131);
	gfx.PutPixel(11 + x, 10 + y, 50, 255, 239);
	gfx.PutPixel(12 + x, 10 + y, 50, 255, 239);
	gfx.PutPixel(13 + x, 10 + y, 50, 255, 239);
	gfx.PutPixel(14 + x, 10 + y, 254, 254, 254);
	gfx.PutPixel(3 + x, 11 + y, 254, 254, 254);
	gfx.PutPixel(4 + x, 11 + y, 50, 255, 239);
	gfx.PutPixel(5 + x, 11 + y, 50, 255, 239);
	gfx.PutPixel(6 + x, 11 + y, 50, 255, 239);
	gfx.PutPixel(7 + x, 11 + y, 50, 255, 239);
	gfx.PutPixel(8 + x, 11 + y, 50, 255, 239);
	gfx.PutPixel(9 + x, 11 + y, 50, 255, 239);
	gfx.PutPixel(10 + x, 11 + y, 50, 255, 239);
	gfx.PutPixel(11 + x, 11 + y, 50, 255, 239);
	gfx.PutPixel(12 + x, 11 + y, 50, 255, 239);
	gfx.PutPixel(13 + x, 11 + y, 254, 254, 254);
	gfx.PutPixel(3 + x, 12 + y, 254, 254, 254);
	gfx.PutPixel(4 + x, 12 + y, 254, 254, 254);
	gfx.PutPixel(5 + x, 12 + y, 50, 255, 239);
	gfx.PutPixel(6 + x, 12 + y, 64, 255, 239);
	gfx.PutPixel(7 + x, 12 + y, 26, 140, 131);
	gfx.PutPixel(8 + x, 12 + y, 50, 255, 239);
	gfx.PutPixel(9 + x, 12 + y, 64, 255, 239);
	gfx.PutPixel(10 + x, 12 + y, 64, 255, 239);
	gfx.PutPixel(11 + x, 12 + y, 50, 255, 239);
	gfx.PutPixel(12 + x, 12 + y, 254, 254, 254);
	gfx.PutPixel(13 + x, 12 + y, 254, 254, 254);
	gfx.PutPixel(4 + x, 13 + y, 254, 254, 254);
	gfx.PutPixel(5 + x, 13 + y, 254, 254, 254);
	gfx.PutPixel(6 + x, 13 + y, 64, 255, 239);
	gfx.PutPixel(7 + x, 13 + y, 63, 255, 239);
	gfx.PutPixel(8 + x, 13 + y, 63, 255, 239);
	gfx.PutPixel(9 + x, 13 + y, 63, 255, 239);
	gfx.PutPixel(10 + x, 13 + y, 64, 255, 239);
	gfx.PutPixel(11 + x, 13 + y, 254, 254, 254);
	gfx.PutPixel(12 + x, 13 + y, 254, 254, 254);
	gfx.PutPixel(6 + x, 14 + y, 254, 254, 254);
	gfx.PutPixel(7 + x, 14 + y, 254, 254, 254);
	gfx.PutPixel(8 + x, 14 + y, 63, 255, 239);
	gfx.PutPixel(9 + x, 14 + y, 254, 254, 254);
	gfx.PutPixel(10 + x, 14 + y, 254, 254, 254);
}

void Diamond::Reset(int newX, int newY)
{
	x = newX;
	y = newY;
}

bool Diamond::IsColliding(const Dude& dude) const
{
	const int left = x;
	const int right = x + size;
	const int top = y;
	const int bottom = y + size;

	return dude.GetX() + size >= left && dude.GetX() <= right && dude.GetY() + size >= top && dude.GetY() <= bottom;
}

int Diamond::GetWorth() const
{
	return worth;
}
