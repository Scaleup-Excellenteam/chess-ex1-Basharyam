#ifndef CHESS_KNIGHT_H
#define CHESS_KNIGHT_H

#include "Piece.h"
class Knight : public Piece{
public:
    Knight(char t) : type(t) {}
    bool is_legel_movement(const string &input, const string &board, bool isWhiteTurn) override;
    

};


#endif //CHESS_KNIGHT_H
