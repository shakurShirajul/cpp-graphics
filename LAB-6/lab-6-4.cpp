// Outline Font
#include <graphics.h>
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    int x = 15;
    int y = 15;
    int font = 10;
    int direction = 0;
    int font_size = 10;
    // for setting text style
    settextstyle(font, direction, font_size);
    outtextxy(x, y, "ADIB C211009");
    getch();
    closegraph();
    return 0;
}