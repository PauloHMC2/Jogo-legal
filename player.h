#ifndef PLAYER_H
#define PLAYER_H

#include "raylib.h"

extern Vector2 posplayer;
extern float velocidade;
extern float stamina;
void Correr(float *velocidade,float *stamina);
void Movimento(void);
#endif