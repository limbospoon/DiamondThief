#pragma once
#include "Graphics.h"
#include "Dude.h"

class Diamond
{
public:
	Diamond(int posX, int posY);
	void DrawDiamond(Graphics& gfx) const;
	void Reset(int newX, int newY);
	bool IsColliding(const Dude& dude) const;
	int GetWorth() const;
private:
	const int size = 16;
	const int worth = 25;
	int x;
	int y;

};