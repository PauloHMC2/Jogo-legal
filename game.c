#include "raylib.h"
#include "game.h"
#include "player.h"
Font fonte;
bool Menuaberto = false;

void CarregarGame()
{fonte = LoadFont("fonte.ttf");}

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

        DrawText(TextFormat("Velocidade: %.2f",velocidade),455,500,20,WHITE);
        DrawText(TextFormat("Stamina: %.2f",stamina),455,520,20,WHITE);
    }   
}
void DescarregarGame()
{UnloadFont(fonte);}