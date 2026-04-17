#include "raylib.h"
#include "game.h"
#include "player.h"
Font fonte;
bool Menuaberto = false;
float tempo;
void CarregarGame()
{fonte = LoadFont("fonte.ttf");}

void Tempo(float *tempo){
    *tempo += GetFrameTime();
}

void Menu()
{
    if (IsKeyDown(KEY_TAB))
    {Menuaberto = !Menuaberto;}

    if (Menuaberto)
    {   
        DrawRectangle(40,490,800,130,Fade(BLACK,0.6f));
        
        DrawRectangle(50,500,400,30,BLACK);
        DrawTextEx(fonte,"Continuar",(Vector2){55,505},20,2,WHITE);

        DrawRectangle(50,535,400,30,BLACK);
        DrawTextEx(fonte,"Configs.",(Vector2){55,540},20,2,WHITE);
    }   






}
void Interface(){
DrawRectangle(0,0,1100,120,BLACK);
    DrawText(TextFormat("Tempo: %.2f",tempo),20,15,16,WHITE);
    DrawText(TextFormat("Velocidade: %.2f",velocidade),20,60,15,WHITE);
    DrawText(TextFormat("Stamina: %d",(int)stamina),20,75,15,WHITE);
}
void DescarregarGame()
{UnloadFont(fonte);}