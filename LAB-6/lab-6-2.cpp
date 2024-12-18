// BoundaryFillAlgorithm
#include <graphics.h>
constintwidth = 400;   // Adjustaccordingtocanvaswidth
constintheight = 400;  // Adjustaccordingtocanvasheight
bool pixels[400][400]; // Create a 2D array to represent the pixels
void drawPixel(int x, int y, int color)
{
    putpixel(x, y, color);
}
void boundaryFill(int x, int y, int fillColor, int boundaryColor)
{
    if (x >= 0 && y >= 0 && x < width && y < height && pixels[x][y])
    {
        pixels[x][y] = false;
        drawPixel(x, y, fillColor);
        // Delay to visualize the process
        delay(1);
        boundaryFill(x + 1, y, fillColor, boundaryColor);
        boundaryFill(x - 1, y, fillColor, boundaryColor);
        boundaryFill(x, y + 1, fillColor, boundaryColor);
        boundaryFill(x, y - 1, fillColor, boundaryColor);
    }
}
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    // Draw a thicker and colorful boundary
    setcolor(RED);
    rectangle(95, 95, 305, 305);
    rectangle(96, 96, 304, 304);
    setcolor(GREEN);
    rectangle(97, 97, 303, 303);
    rectangle(98, 98, 302, 302);
    setcolor(BLUE);
    rectangle(99, 99, 301, 301);
    rectangle(100, 100, 300, 300);
    // Fill the area inside the boundary with red
    boundaryFill(200, 200, RED, BLACK);
    delay(5000);
    closegraph();
    return 0;
}