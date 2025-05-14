#ifndef CHESS_PIECE_H
#define CHESS_PIECE_H
#include <string>
#include <iostream>
using std::string;

class Piece {
protected:
    char type;
public:
    explicit Piece(char t) : type(t) {}
    virtual ~Piece() = default;
    virtual bool is_legel_movement(const string& input, const string& board, bool isWhiteTurn)=0;
    virtual char get_type() { return type; }
};


#endif //CHESS_PIECE_H
