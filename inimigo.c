#include "raylib.h"
#include "player.h"
#include "inimigo.h"
#include <math.h>

#define MAXINIM 5

float velinim = 1.5f;

int qtdinim = 0;

Vector2 posinim[MAXINIM];

void DefQtdeInim(int *qtdinim)
{
    *qtdinim = GetRandomValue(1, MAXINIM);
}

void Gerarinim(void)
{
    DefQtdeInim(&qtdinim);

    for (int i = 0; i < qtdinim; i++)
    {
        posinim[i].x = GetRandomValue(100, 700);
        posinim[i].y = GetRandomValue(100, 700);
    }

}

void MovInim(){
    for (int i=0;i < qtdinim; i++)
    {
        Vector2 direção;

        direção.x = posplayer.x - posinim[i].x;
        direção.y = posplayer.y - posinim[i].y;
        
        float distancia = sqrtf(direção.x * direção.x + direção.y * direção.y);

        if(distancia > 0){

            direção.x /= distancia;
            direção.y /= distancia;
        }
        posinim[i].x += direção.x * velinim;
        posinim[i].y += direção.y * velinim;
    }
    
}