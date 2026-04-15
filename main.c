#include "raylib.h"
#include "player.h"
#include "game.h"
#include "inimigo.h"
int main(){
    InitWindow(1100,720,"ok");
    CarregarGame();

while(!WindowShouldClose()){
    Movimento();
    movinim();
    BeginDrawing();
        DrawRectangle(posplayer.x,posplayer.y,40,40,RED);
        DrawRectangle(posinim.x,posinim.y,40,40,BLUE);
        Menu();
        ClearBackground(RAYWHITE);
    EndDrawing();
}
DescarregarGame();
CloseWindow();
    return 0;
}