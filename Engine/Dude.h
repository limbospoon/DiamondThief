#pragma once
#include "Graphics.h"

class Dude
{
public:
	Dude(int posX, int posY);
	void DrawDude(Graphics& gfx);
	void MoveDude(int dx, int dy);
	void Reset();
	void Invincibility();
	bool GetInvincibility();
	int GetX() const;
	int GetY() const;

private:
	const int size = 16;
	int x;
	int y;
	int startX = 416;
	int startY = 316;
	bool isInvincible = false;
	bool moved = false;
	Color normal = Colors::Yellow;
	Color invincibleColor = Colors::Red;
	Color currentColor = normal;
};