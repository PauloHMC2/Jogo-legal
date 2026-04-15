#include "raylib.h"
#include "game.h"
Font fonte;
void CarregarGame()
{fonte = LoadFont("fonte.ttf");}
void Menu()
{
    if (IsKeyDown(KEY_TAB))
    {
        DrawRectangle(50,500,400,30,BLACK);
        DrawTextEx(fonte,"Continuar",(Vector2){55,505},20,2,WHITE);

        DrawRectangle(50,535,400,30,BLACK);
        DrawTextEx(fonte,"Configs.",(Vector2){55,540},20,2,WHITE);
    }
}
void DescarregarGame()
{UnloadFont(fonte);}