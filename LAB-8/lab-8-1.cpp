#include <graphics.h>
#include <conio.h>
#include <iostream>
// Function to scale a point about the origin by a given factor
void scale_point(int &x, int &y, int scale)
{
    x *= scale;
    y *= scale;
}
int main()
{
    // Initialize graphics mode
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);
    // Draw the x and y axes
    line(0, 200, 400, 200);
    line(200, 0, 200, 400);
    // Prompt the user to enter the x and y coordinates of the original
    point int x = 200, y = 200;
    // Draw the original point
    circle(x + 200, -y + 200, 5);
    f
        loodfill(x + 200, -y + 200, WHITE);
    // Prompt the user to enter the scaling factor
    int scale = 2;
    // Scale the point by the given factor about the origin
    scale_point(x, y, scale);
    // Draw the scaled point and line
    circle(x + 200, -y + 200, 5);
    f
        loodfill(x + 200, -y + 200, BLUE);
    line(200, 200, x + 200, -y + 200);
    // Draw point values for the original and scaled points
    outtextxy(x + 210, -y + 190, "(x, y)");
    outtextxy(x + 210, -y + 190 + scale, "(x_new, y_new)");
    // Wait for a key press
    getch();
    // Close graphics mode
    closegraph();
    return 0;
}