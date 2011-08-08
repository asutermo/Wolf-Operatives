//-----------------------------------------------------------------------------
// The main entry point. This file links the game to the engine.
//
// Andrew Suter-Morris and Chandler Nieder with help from Vaughan Young
//-----------------------------------------------------------------------------
#ifndef MAIN_H
#define MAIN_H

//-----------------------------------------------------------------------------
// System Includes
//-----------------------------------------------------------------------------
#include <windows.h>

//-----------------------------------------------------------------------------
// Engine Includes
//-----------------------------------------------------------------------------
#include "..\Engine\Engine.h"
#pragma comment( lib, "../Engine/Engine.lib" )

//-----------------------------------------------------------------------------
// Game Includes
//-----------------------------------------------------------------------------
#include "GameMaterial.h"
#include "Bullet.h"
#include "Weapon.h"
#include "PlayerObject.h"
#include "PlayerManager.h"
#include "Menu.h"
#include "Game.h"

//-----------------------------------------------------------------------------
// Player Data Structure
//-----------------------------------------------------------------------------
struct PlayerData
{
	char character[MAX_PATH];
	char map[MAX_PATH];
	char game[MAX_PATH];
};

#endif