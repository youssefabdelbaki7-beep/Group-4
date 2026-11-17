#include <iostream>
#include "raylib.h"
using namespace std;

int main() {

    string name;
    cout << "hello world!" << endl;
    cout << "what is your name?" << endl;
    cin >> name;
    cout << "hello, " << name << "... press enter to continue ..." << endl;

    /* raylib graphics + games library: open a window, size 1000x800 pixels */
    InitWindow(1000, 800, "hackathon example");
    // FPS = frame rate, 30 per second, caps the window rendering
    SetTargetFPS(30);

    // load a TEXTURE, an image that will fill a shape
    /* more info: https://www.raylib.com/examples/textures/loader.html?name=textures_image_drawing */
    Texture2D photo = LoadTexture("cats-img.jpg");
    if (photo.id == 0) {
        CloseWindow();
        return -1;
    }

    // preparing text to add on top of image
    string message = "PRESS ENTER TO CONTINUE";
    Color textColor = YELLOW;

    /* opens the graphics library window! */
    while (!WindowShouldClose()) {

        BeginDrawing();
        ClearBackground(BLACK);

        // we need to draw a SHAPE to fill with the TEXTURE (image)
        Rectangle source = { 0, 0, (float)photo.width, (float)photo.height };
        Rectangle dest   = { 0, 0, 1000, 800 };

        DrawTexturePro(photo, source, dest, {0, 0}, 0.0f, WHITE);
        // parameters: texture, shape, destination, origin, rotation, color tint

        DrawText(message.c_str(), 40, 40, 24, textColor);
        // message, x, y, font-size, color
        // more colors you can use with raylib:
        // https://www.raylib.com/examples/shapes/loader.html?name=shapes_colors_palette

        if (IsKeyDown(KEY_ENTER)) {
            message = "hello " + name;
            textColor = RED;
        }

        EndDrawing();
    }

    UnloadTexture(photo);
    CloseWindow();
    cout << endl << endl << endl;
    cout << "more can happen in the terminal after the window is closed ..." << endl;

    return 0;
}