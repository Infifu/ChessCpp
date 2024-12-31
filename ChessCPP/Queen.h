#pragma once
#include "Piece.h"
class Queen : public Piece
{
public:
	Queen(Color color); //black = false, white = true
	bool validmoves(std::string currPositon, std::string goalPositionm, Piece* (&grid)[8][8]) override;
};

