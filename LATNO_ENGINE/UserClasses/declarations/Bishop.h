#pragma once
#include "Piece.h"

class Bishop : public Piece
{
public:
	void Update() override;
	void Start() override;
};