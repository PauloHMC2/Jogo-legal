#include "raylib.h"
#include "player.h"
#include "game.h"
int main(){
    InitWindow(1100,720,"ok");
    CarregarGame();

while(!WindowShouldClose()){
    Movimento();
    BeginDrawing();
        DrawRectangle(posplayer.x,posplayer.y,40,40,RED);
        Menu();
        ClearBackground(RAYWHITE);
    EndDrawing();
}
DescarregarGame();
CloseWindow();
    return 0;
}