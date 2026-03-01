#include <raylib.h>

int ballx=400;
int bally=400;

int main(void){
    InitWindow(800,800,"abc");
    SetTargetFPS(120);

    while (WindowShouldClose()==false)
    {
        if (IsKeyDown(KEY_RIGHT)) ballx += 3;
        if (IsKeyDown(KEY_LEFT))  ballx -= 3;
        if (IsKeyDown(KEY_UP))    bally -= 3;
        if (IsKeyDown(KEY_DOWN))  bally += 3;


        BeginDrawing();

        DrawCircle(ballx,bally,20,WHITE);
        
        EndDrawing();
    }
    



    CloseWindow();
    return 0;
}