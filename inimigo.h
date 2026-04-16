#ifndef INIMIGO_H
#define INIMIGO_H

#include "raylib.h"

#define MAXINIM 5

extern float velinim;
extern int qtdinim;
extern Vector2 posinim[MAXINIM];

void DefQtdeInim(int *qtdinim);
void Gerarinim(void);
void MovInim(void);

#endif