#ifndef CHESS_KING_H
#define CHESS_KING_H
#include "Piece.h"
class King : public Piece {
public:
    King(char t) : type(t) {}
    bool is_legel_movement(const string &input, const string &board, bool isWhiteTurn) override;
};


#endif //CHESS_KING_H
