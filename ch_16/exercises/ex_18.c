//
// Created by erkam on 3/17/25.
//

typedef enum
{
    BLACK,
    WHITE
} Color;

typedef enum
{
    EMPTY,
    PAWN,
    KNIGHT,
    BISHOP,
    ROOK,
    QUEEN,
    KING
} Piece;

typedef struct
{
    Color color;
    Piece piece;
} Square;

int main(void)
{
    Square board[8][8] = {
        {{ROOK, BLACK},
         {KNIGHT, BLACK},
         {BISHOP, BLACK},
         {QUEEN, BLACK},
         {KING, BLACK},
         {BISHOP, BLACK},
         {KNIGHT, BLACK},
         {ROOK, BLACK}},
        {{PAWN, BLACK},
         {PAWN, BLACK},
         {PAWN, BLACK},
         {PAWN, BLACK},
         {PAWN, BLACK},
         {PAWN, BLACK},
         {PAWN, BLACK},
         {PAWN, BLACK}},
        {{EMPTY, BLACK},
         {EMPTY, BLACK},
         {EMPTY, BLACK},
         {EMPTY, BLACK},
         {EMPTY, BLACK},
         {EMPTY, BLACK},
         {EMPTY, BLACK},
         {EMPTY, BLACK}},
        {{EMPTY, BLACK},
         {EMPTY, BLACK},
         {EMPTY, BLACK},
         {EMPTY, BLACK},
         {EMPTY, BLACK},
         {EMPTY, BLACK},
         {EMPTY, BLACK},
         {EMPTY, BLACK}},
        {{EMPTY, BLACK},
         {EMPTY, BLACK},
         {EMPTY, BLACK},
         {EMPTY, BLACK},
         {EMPTY, BLACK},
         {EMPTY, BLACK},
         {EMPTY, BLACK},
         {EMPTY, BLACK}},
        {{EMPTY, BLACK},
         {EMPTY, BLACK},
         {EMPTY, BLACK},
         {EMPTY, BLACK},
         {EMPTY, BLACK},
         {EMPTY, BLACK},
         {EMPTY, BLACK},
         {EMPTY, BLACK}},
        {{PAWN, WHITE},
         {PAWN, WHITE},
         {PAWN, WHITE},
         {PAWN, WHITE},
         {PAWN, WHITE},
         {PAWN, WHITE},
         {PAWN, WHITE},
         {PAWN, WHITE}},
        {{ROOK, WHITE},
         {KNIGHT, WHITE},
         {BISHOP, WHITE},
         {QUEEN, WHITE},
         {KING, WHITE},
         {BISHOP, WHITE},
         {KNIGHT, WHITE},
         {ROOK, WHITE}},
    };
}
