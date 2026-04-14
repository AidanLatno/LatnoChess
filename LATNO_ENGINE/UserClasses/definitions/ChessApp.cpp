#include "../declarations/ChessApp.h"

void ChessApp::Load()
{
	inputManager = new InputManager;

	mainScene = new Scene(WINDOW_LENGTH, WINDOW_HEIGHT, window);
	mainScene->SetBackgroundColor(0, 0.25, 0.5);
	currentScene = mainScene;

	randObject = new Actor({ WINDOW_LENGTH / 2,WINDOW_HEIGHT / 2 }, "resources/textures/person.png");
	mainScene->AddActor(*randObject);

	SoundDevice::Play(opening_music);
}

bool ChessApp::Tick()
{
	ImGui::Text("Chess App");
	if (inputManager->MousePressed(MOUSE_BUTTON_LEFT))
		randObject->SetPos(inputManager->GetMousePos());
	return true;
}

void ChessApp::End()
{
	delete mainScene;
	delete randObject;
	delete inputManager;
}

void ChessApp::FixedTick()
{

}