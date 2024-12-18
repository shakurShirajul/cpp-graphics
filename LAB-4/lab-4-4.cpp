#include <graphics.h>
void drawCircleMidpoint(int x, int y, int radius)
{
    int x1 = 0;
    int y1 = radius;
    int p = 1 - radius;
    while (x1 <= y1)
 {

        putpixel(x + x1, y + y1, BLUE);
        putpixel(x - x1, y + y1, BLUE);
        putpixel(x + x1, y - y1, BLUE);
        putpixel(x - x1, y - y1, BLUE);
        putpixel(x + y1, y + x1, BLUE);
        putpixel(x - y1, y + x1, BLUE);
        putpixel(x + y1, y - x1, BLUE);
        putpixel(x - y1, y - x1, BLUE);
        x1++;
        if (p < 0)
        {
            p += 2 * x1 + 1;
        }
        else
        {
            y1--;
            p += 2 * (x1 - y1) + 1; }}}
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);
    int x = getmaxx() / 2;
    int y = getmaxy() / 2;
    int radius = 100;
    drawCircleMidpoint(x, y, radius);
    getch();

    closegraph(20000);
    return 0;
}
