//-----------------------------------------------------------------------------
// A very basic menu state that loads (and handles messages for) a simple
// dialog box for the menu system.
//
// Andrew Suter-Morris and Chandler Nieder with help from Vaughan Young
//-----------------------------------------------------------------------------
#ifndef MENU_H
#define MENU_H

//-----------------------------------------------------------------------------
// State ID Define
//-----------------------------------------------------------------------------
#define STATE_MENU 0

//-----------------------------------------------------------------------------
// Menu Class
//-----------------------------------------------------------------------------
class Menu : public State
{
public:
	Menu();

	virtual void Update( float elapsed );
};

#endif