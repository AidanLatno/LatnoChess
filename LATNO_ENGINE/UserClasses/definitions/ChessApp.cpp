#include "../declarations/ChessApp.h"

void ChessApp::Load()
{
	// Initialization of actors and other engine components
	inputManager = new InputManager;
	mainScene = new Scene(WINDOW_LENGTH, WINDOW_HEIGHT, window);
	for (int i = 0; i < 8; i++)
	{
		for(int j = 0; j < 8; j++)
		{
			boardSquareList[i][j] = new Actor(
				{ WINDOW_LENGTH / 2 - 400 + i * 100, WINDOW_HEIGHT / 2 - 400 + j * 100 },
				(i+j) % 2 == 0 ? "resources/textures/white-square.png" : "resources/textures/black-square.png");
			mainScene->AddActor(*boardSquareList[i][j]);
		}
	}

	// Initializating default attributes for engine components
	mainScene->SetBackgroundColor(0, 0.25, 0.5);
	currentScene = mainScene;

	// Adding Actors

	//SoundDevice::Play(opening_music);
}

bool ChessApp::Tick()
{
	ImGui::Text("Chess App");
	
	return true;
}

void ChessApp::End()
{
	delete mainScene;
	delete inputManager;
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			delete boardSquareList[i][j];
			boardSquareList[i][j] = nullptr;
		}
	}
}

void ChessApp::FixedTick()
{

}