#ifndef CHESS_BISHOP_H
#define CHESS_BISHOP_H

#include "Piece.h"
class Bishop : public Piece{
public:
    Bishop(char t) : type(t) {}
    bool is_legel_movement(const std::string &input, const std::string &board, bool isWhiteTurn) override;
    


};


#endif //CHESS_BISHOP_H
