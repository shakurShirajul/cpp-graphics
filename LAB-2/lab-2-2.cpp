// Bangla ka kha:
#include <graphics.h>
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    circle(175, 150, 7);
    arc(212, 150, 180, 280, 45);
    line(218, 195, 170, 245);
    line(170, 245, 250, 245);
    line(250, 147, 250, 245);
    line(210, 147, 290, 147);
    line(360, 147, 310, 200);
    line(310, 200, 360, 245);
    line(360, 147, 360, 245);
    arc(365, 159, 330, 110, 15);
    line(360, 147, 320, 147);
    getch();
    closegraph();
}