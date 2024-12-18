#include<iostream>
#include <graphics.h>
#include <cmath>
using namespace std;
void drawEllipse(int xc, int yc, int a, int b)
{
    double theta = 0;
    double step = 1.0 / max(a, b);
    for (theta = 0; theta < 6.28; theta += step)
    {
        int x = xc + a * cos(theta);
        int y = yc + b * sin(theta);
        putpixel(x, y, WHITE);
    }
}
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);
    int xc = 200, yc = 200, a = 100, b = 50;
    drawEllipse(xc, yc, a, b);
    getch();
    closegraph();
    return 0;
}
