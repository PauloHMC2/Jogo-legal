#include "raylib.h"
#include "player.h"
#include "game.h"
#include "inimigo.h"

int main(void)
{
    InitWindow(1100, 720, "ok");
    SetTargetFPS(60);

    CarregarGame();
    Gerarinim();

    while (!WindowShouldClose())
    {
        Movimento();
        MovInim();
        Menu();
        BeginDrawing();
        ClearBackground(RAYWHITE);

        DrawRectangle(posplayer.x, posplayer.y, 40, 40, RED);

        for (int i = 0; i < qtdinim; i++)
        {
            DrawRectangle(
                posinim[i].x,
                posinim[i].y,
                20,
                20,
                BLACK
            );
        }

        EndDrawing();
    }

    DescarregarGame();
    CloseWindow();

    return 0;
}