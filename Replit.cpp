#include <raylib.h>
#include <cstdlib>
#include "dice.hpp"
#include <ctime>
int main (void){
    Die dice(5);
    InitWindow(1600, 1200, "P5.js");
    SetTargetFPS(60);
    Texture2D MacImage = LoadTexture("Assets/macbeth.png");
    Texture2D MacDuck = LoadTexture("Assets/fancyduck.png");
    Texture2D BadDuck = LoadTexture("Assets/badduck.png");
    Texture2D BritishDuck = LoadTexture("Assets/britishduck.png");
     Texture2D DonaldDuck = LoadTexture("Assets/donald.png");
     srand(time(NULL));
     int whichRoll = dice.Roll();
    while(!WindowShouldClose()){
        if(IsKeyPressed(KEY_SPACE)){
            whichRoll = dice.Roll();
        }
        BeginDrawing();
        ClearBackground(WHITE);
        if(whichRoll == 1){
        DrawTexture(MacDuck, 100, 100, WHITE);}
        else if(whichRoll == 2){
        DrawTexture(BadDuck, 100, 100, WHITE); 
        }
        else if(whichRoll == 3){
        DrawTexture(BritishDuck, 100, 100, WHITE); 
        }
        else if(whichRoll == 4){
        DrawTexture(DonaldDuck, 100, 100, WHITE); 
        }
        else if(whichRoll == 5){
        DrawTexture(MacImage, 100, 100, WHITE); 
        }

        DrawText("Cool duck image randomizer", 190, 200, 25, BLACK);
        EndDrawing();        
    }
    UnloadTexture(MacImage);
    UnloadTexture(BadDuck);
    UnloadTexture(MacDuck);
    UnloadTexture(BritishDuck);
    UnloadTexture(DonaldDuck);
    CloseWindow();
return 0;
}