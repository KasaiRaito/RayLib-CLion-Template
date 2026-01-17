//
// KasaiRaito, all right reserved.
//

#include "raylib.h"
#include "Balls.h"

int main() {
    InitWindow(800, 450, "Kitsune Engine");
    SetTargetFPS(60);

    Balls ball;

    while (!WindowShouldClose()) {
        float dt = GetFrameTime();
        ball.Update(dt);

        BeginDrawing();
        ClearBackground(RAYWHITE);
        ball.Draw();
        EndDrawing();
    }

    CloseWindow();
    return 0;
}
