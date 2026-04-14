#pragma once
#include "../../engine/declarations/Engine.h"

class Piece : public Latno::Actor
{
public:
	bool isWhite;
	std::string possibleTexturePaths[2]; // 0 is white, 1 is black
};