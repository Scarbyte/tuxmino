#ifndef DRAW_H
#define DRAW_H
#include "engine.h"

// draw.c functions
void drawBorder(Vector2 playFieldPos, Texture2D borderTileset, int cellSize, Color drawColor);
void drawPiecePreview(Piece activePiece, Vector2 playFieldPos, int cellSize);
void drawheldPiece(Piece activePiece, int cellSize);
void drawActivePiece(Piece activePiece, Vector2 playFieldPos, int cellSize);
void drawGhostPiece(Piece* activePiece, Block** playField, Vector2 playFieldPos, int cellSize);
void drawPlayField(Block** playField, Vector2 playFieldPos, int cellSize, bool isInvisible);
void drawStackOutline(Block** playField, Vector2 playFieldPos, int cellSize, bool isInvisible);
void drawMenu(int gameType, Vector2 playFieldPos);

#endif
