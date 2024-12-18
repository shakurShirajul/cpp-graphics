#include <graphics.h>
#include <cmath>
void drawEllipse(int xc, int yc, int a, int b)
{
    int x = 0, y = b;
    double dx = 2 * b * b * x, dy = 2 * a * a * y;
    putpixel(xc + x, yc + y, YELLOW);
    putpixel(xc - x, yc + y, YELLOW);
    putpixel(xc + x, yc - y, YELLOW);
    putpixel(xc - x, yc - y, YELLOW);
    while (dx < dy)
    {
        x++;
        dx += 2 * b * b;
        double tmp = dx / (2 * a * a);
        y = sqrt(b * b - tmp * tmp);
        putpixel(xc + x, yc + y, YELLOW);
        putpixel(xc - x, yc + y, YELLOW);
        putpixel(xc + x, yc - y, YELLOW);
        putpixel(xc - x, yc - y, YELLOW);
    }
    dx = 0;
    dy = 2 * a * a * y;
    while (y >= 0)
    {
        y--;
        dy -= 2 * a * a;
        double tmp = dy / (2 * b * b);
        x = sqrt(a * a - tmp * tmp);
        putpixel(xc + x, yc + y, YELLOW);
        putpixel(xc - x, yc + y, YELLOW);
        putpixel(xc + x, yc - y, YELLOW);
        putpixel(xc - x, yc - y, YELLOW);
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
