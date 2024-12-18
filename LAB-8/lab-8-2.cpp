// Scaling a triangle about origin.
#include <graphics.h>
#include <conio.h>
// Function to scale a point about the origin by a given factor
void scale_point(int &x, int &y, float scale)
{
    x = int(x * scale);
    y = int(y * scale);
}
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL); // Initialize graphics mode
    // Draw the x and y axes
    line(0, getmaxy() / 2, getmaxx(), getmaxy() / 2);
    line(getmaxx() / 2, 0, getmaxx() / 2, getmaxy());
    // Triangle vertices (approximate values)
    int x1 = 100, y1 = 50;
    int x2 = 200, y2 = 150;
    int x3 = 150, y3 = 250;
    // Draw the original triangle
    line(x1 + getmaxx() / 2, -y1 + getmaxy() / 2, x2 + getmaxx() / 2, -y2 + getmaxy() / 2);
    line(x2 + getmaxx() / 2, -y2 + getmaxy() / 2, x3 + getmaxx() / 2, -y3 + getmaxy() / 2);
    line(x3 + getmaxx() / 2, -y3 + getmaxy() / 2, x1 + getmaxx() / 2, -y1 + getmaxy() / 2);
    // Scaling factor (approximate value)
    f
        loat scale = 1.5;
    // Scale the triangle by the given factor about the origin
    scale_point(x1, y1, scale);
    scale_point(x2, y2, scale);
    scale_point(x3, y3, scale);
    // Draw the scaled triangle
    setcolor(BLUE);
    line(x1 + getmaxx() / 2, -y1 + getmaxy() / 2, x2 + getmaxx() / 2, -y2 + getmaxy() / 2);
    line(x2 + getmaxx() / 2, -y2 + getmaxy() / 2, x3 + getmaxx() / 2, -y3 + getmaxy() / 2);
    line(x3 + getmaxx() / 2, -y3 + getmaxy() / 2, x1 + getmaxx() / 2, -y1 + getmaxy() / 2);
    getch();      // Wait for user input
    closegraph(); // Close graphics mode
    return 0;
}