#include "raylib.h"
#include "player.h"
#include "inimigo.h"
#include <math.h>

float velinim = 0.4f;
Vector2 posinim = {200.0f,400.0f};

int numinim;


void QtdInim(int *numinim){
    *numinim = GetRandomValue(1,5);
}
void movinim()
{
    Vector2 direcao = {0.0f, 0.0f};

    direcao.x = posplayer.x - posinim.x;
    direcao.y = posplayer.y - posinim.y;


  float norma = sqrtf(direcao.x * direcao.x + direcao.y * direcao.y);

    if(norma > 0.0f)
    {
        direcao.x /= norma;
        direcao.y /= norma;
    }

    posinim.x += direcao.x *velinim;
    posinim.y += direcao.y * velinim;
}