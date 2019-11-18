/****************************************************************************************** 
 *	Chili DirectX Framework Version 16.07.20											  *	
 *	Game.h																				  *
 *	Copyright 2016 PlanetChili.net <http://www.planetchili.net>							  *
 *																						  *
 *	This file is part of The Chili DirectX Framework.									  *
 *																						  *
 *	The Chili DirectX Framework is free software: you can redistribute it and/or modify	  *
 *	it under the terms of the GNU General Public License as published by				  *
 *	the Free Software Foundation, either version 3 of the License, or					  *
 *	(at your option) any later version.													  *
 *																						  *
 *	The Chili DirectX Framework is distributed in the hope that it will be useful,		  *
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of						  *
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the						  *
 *	GNU General Public License for more details.										  *
 *																						  *
 *	You should have received a copy of the GNU General Public License					  *
 *	along with The Chili DirectX Framework.  If not, see <http://www.gnu.org/licenses/>.  *
 ******************************************************************************************/
#pragma once

#include <random>

#include "Keyboard.h"
#include "Mouse.h"
#include "Graphics.h"
#include "Dude.h"
#include "Bomb.h"
#include "Diamond.h"

class Game
{
public:
	Game( class MainWindow& wnd );
	Game( const Game& ) = delete;
	Game& operator=( const Game& ) = delete;
	void Go();
private:
	void ComposeFrame();
	void UpdateModel();
	/********************************/
	/*  User Functions              */
	/********************************/
	int ClampX(int x, int size);
	int ClampY(int y, int size);
	void DrawStartScreen(int x, int y);
	void DrawNumber(int x, int y, int num);
	void DrawLives(int x, int y);
	void DrawGameOver(int x, int y);
	void UpdateScore();
	void ClearScoreSlots();
	void RestartGame();
	void SetupBombs();

private:
	MainWindow& wnd;
	Graphics gfx;
private:
	/********************************/
	/*  User Variables              */
	/********************************/
	std::random_device rd;
	std::mt19937 rng;
	std::uniform_int_distribution<int> xDist;
	std::uniform_int_distribution<int> yDist;
	std::uniform_int_distribution<int> rdx;
	std::uniform_int_distribution<int> rdy;
	
	bool startGame = false;
	bool gameOver = false;
	static constexpr int nBombs = 12;
	static constexpr int nNums = 4;
	int score = 0;
	int lives = 3;
	int scoreSlots[nNums];

	Dude dude;
	Bomb bombs[nBombs];
	Diamond diamond;
};