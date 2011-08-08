//-----------------------------------------------------------------------------
// The derived game material allows new properties to be added to the
// materials, such as sound effects for when the material is stepped on.
//
// Andrew Suter-Morris and Chandler Nieder with help from Vaughan Young
//-----------------------------------------------------------------------------
#ifndef GAME_MATERIAL_H
#define GAME_MATERIAL_H

//-----------------------------------------------------------------------------
// Game Material Class
//-----------------------------------------------------------------------------
class GameMaterial : public Material
{
public:
	GameMaterial();
	GameMaterial( char *name, char *path = "./" );
	virtual ~GameMaterial();

	Sound *GetStepSound();

private:
	LinkedList< Sound > *m_stepSounds;
};

#endif