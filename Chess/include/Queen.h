#ifndef CHESS_QUEEN_H
#define CHESS_QUEEN_H
#include "Piece.h"

class Queen : public Piece{
public:
    Queen(char t) : type(t) {}
    bool is_legel_movement(const std::string &input, const std::string &board, bool isWhiteTurn) override;
    
};


#endif //CHESS_QUEEN_H
