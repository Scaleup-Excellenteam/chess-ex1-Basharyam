#include "King.h"
#include <cmath>
#include <cctype>

bool King::is_legel_movement(const string &input, const string &board, bool isWhiteTurn) {
    int srcCol = input[0] - 'a';
    int srcRow = 8 - (input[1] - '0');
    int dstCol = input[2] - 'a';
    int dstRow = 8 - (input[3] - '0');
    if (std::max(std::abs(srcRow - dstRow), std::abs(srcCol - dstCol)) > 1)
        return false;
    char dstPiece = board[dstRow * 8 + dstCol];
    if (dstPiece == '#')
        return true;
    return isWhiteTurn ? !std::isupper(dstPiece) : !std::islower(dstPiece);
}
