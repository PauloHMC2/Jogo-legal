#include "player.h"
#include "raylib.h"
#include <math.h>

float velocidade = 2.5f;
Vector2 posplayer = {100.0f, 100.0f};
float stamina = 5;

void Correr(float *velocidade, float *stamina)
{
    if (IsKeyDown(KEY_LEFT_SHIFT) && *stamina > 0)
    {
        if (*velocidade < 4.5f)
            *velocidade += 0.5f;

        *stamina -= GetFrameTime();
        
        if (*stamina < 0)
            *stamina = 0;
    }
    else
    {
        if (*velocidade > 2.5f)
            *velocidade -= 0.5f;
    }
    if(!IsKeyDown(KEY_LEFT_SHIFT)&& *stamina < 5){
        *stamina += GetFrameTime()/3;
    }
}

void Movimento(){
Vector2 direção ={0.0f,0.0f};

if(IsKeyDown(KEY_W)){direção.y -= 1;}
if(IsKeyDown(KEY_S)){direção.y += 1;}
if(IsKeyDown(KEY_A)){direção.x -= 1;}
if(IsKeyDown(KEY_D)){direção.x += 1;}

float comp = sqrtf(direção.x * direção.x + direção.y * direção.y);

if (comp > 0.0f)
{direção.x /= comp;
direção.y /= comp;}

posplayer.x += direção.x * velocidade;
posplayer.y += direção.y * velocidade;
}