#pragma once
#include "../../engine/declarations/Application.h"

using namespace Latno;

class ChessApp : public Latno::Application
{
public:
	Scene* mainScene;
	Actor* randObject;
	InputManager* inputManager;

	ALuint opening_music = SoundBuffer::get()->addSoundEffect("resources/audio/credits-opening1.ogg");

	// Override methods
	void Load() override;
	bool Tick() override;
	void End() override;
	void FixedTick() override;
};
