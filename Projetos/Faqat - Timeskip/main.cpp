/*******************************************************************************************
*
*   FAQAT - Timeskip
*
*   Copyright (c) 2024-2024 Wesley Roque (cdcwesley02)
*
********************************************************************************************/
#include <iostream>

#include "raylib.h"

using namespace std;



//----------------------------------------------------------------------------------
// Local Variables Definition (local to this module)
//----------------------------------------------------------------------------------


//----------------------------------------------------------------------------------
// Local Functions Declaration
//----------------------------------------------------------------------------------
typedef enum Gamescreen {UM = 0, DOIS, TRES} Gamescreen;

const int screenWidth = 640;
const int screenHeight = 480;



//----------------------------------------------------------------------------------
// Main entry point
//----------------------------------------------------------------------------------
int main()
{
    

    InitWindow(screenWidth, screenHeight, "FAQAT - Timeskip");

    Gamescreen currentScreen = UM;

    

    int framesCounter = 0;
    SetTargetFPS(60);
    
    // Main game loop
    while (!WindowShouldClose())
    {

        switch (currentScreen)
        {
            case UM:
            {
                framesCounter++;

                if (framesCounter > 120)
                {
                    currentScreen = DOIS;
                }
            } break;
            
            case DOIS:
            {

            } break;

            case TRES:
            {

            } break;


            default:  break;
        }
    
        BeginDrawing();

            ClearBackground(BLUE);

            switch (currentScreen)
            {
            case UM:
            {
                DrawText("UM", 100, 100, 40, MAROON);
                DrawText("aguarde...", 100, 150, 10, LIGHTGRAY);
            }
                break;
            
            case DOIS:
            {
                DrawText("DOIS", 100, 100, 40, GREEN);
            }
            break;

            case TRES:
            {
                
            }
            break;

            default:
                break;
            }

            EndDrawing();

    }


    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();                  // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}


