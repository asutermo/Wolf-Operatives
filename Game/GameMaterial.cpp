//-----------------------------------------------------------------------------
// GameMaterial.h implementation.
// Refer to the GameMaterial.h interface for more details.
//
// Andrew Suter-Morris and Chandler Nieder with help from Vaughan Young
//-----------------------------------------------------------------------------
#include "Main.h"

//-----------------------------------------------------------------------------
// The game material class constructor.
//-----------------------------------------------------------------------------
GameMaterial::GameMaterial() : Material()
{
	// The default material doesn't have any step sounds.
	m_stepSounds = NULL;
}

//-----------------------------------------------------------------------------
// The game material class constructor.
//-----------------------------------------------------------------------------
GameMaterial::GameMaterial( char *name, char *path ) : Material( name, path )
{
	// Load the script for this material.
	Script *script = new Script( name, path );

	// Store the step sounds.
	m_stepSounds = new LinkedList< Sound >;
	char stepSound[16] = { "step_sound0" };
	while( script->GetStringData( stepSound ) != NULL )
	{
		m_stepSounds->Add( new Sound( script->GetStringData( stepSound ) ) );
		sprintf_s( stepSound, "step_sound%d", m_stepSounds->GetTotalElements() );
	}

	// Destory the material's script.
	SAFE_DELETE( script );
}

//-----------------------------------------------------------------------------
// The game material class destructor.
//-----------------------------------------------------------------------------
GameMaterial::~GameMaterial()
{
	// Destroy the step sounds list.
	SAFE_DELETE( m_stepSounds );
}

//-----------------------------------------------------------------------------
// Returns a random step sound from the list of step sounds.
//-----------------------------------------------------------------------------
Sound *GameMaterial::GetStepSound()
{
	if( m_stepSounds == NULL )
		return NULL;

	return m_stepSounds->GetRandom();
}