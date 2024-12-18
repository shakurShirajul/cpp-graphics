//  3. Scaling a triangle about another point.
#include <graphics.h>
#include <conio.h>
// Function to scale a point about a center point by a given factor
void scale_point(int &x, int &y, int scale, int center_x, int center_y)
{
    x = center_x + (x - center_x) * scale;
    y = center_y + (y - center_y) * scale;
}
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL); // Initialize graphics mode
    // Center of the screen
    int center_x = getmaxx() / 2;
    int center_y = getmaxy() / 2;
    // Approximate coordinates of the triangle vertices
    int x1 = center_x - 100;
    int y1 = center_y - 50;
    int x2 = center_x + 100;
    int y2 = center_y - 50;
    int x3 = center_x;
    int y3 = center_y + 100;
    // Draw the original triangle
    setcolor(RED);
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);
    // Scaling factor
    int scale = 2; // Example scaling factor
    // Scale the triangle by the given factor about the center point
    scale_point(x1, y1, scale, center_x, center_y);
    scale_point(x2, y2, scale, center_x, center_y);
    scale_point(x3, y3, scale, center_x, center_y);
    // Draw the scaled triangle
    setcolor(GREEN);
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);
    getch();      // Wait for user input
    closegraph(); // Close graphics mode
    return 0;
}