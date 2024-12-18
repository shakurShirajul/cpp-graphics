// Sriti Shoudo:
#include <graphics.h>
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    line(270, 150, 270, 300);
    line(270, 150, 250, 300);
    line(270, 150, 290, 300);
    line(270, 160, 250, 300);
    line(270, 160, 290, 300);
    line(265, 200, 230, 300);
    line(275, 200, 310, 300);
    line(255, 230, 210, 300);
    line(285, 230, 330, 300);
    line(243, 250, 190, 300);
    line(298, 250, 350, 300);
    line(226, 267, 169, 300);
    line(315, 267, 371, 300);
    line(140, 300, 400, 300);
    line(130, 310, 410, 310);
    line(120, 320, 420, 320);
    line(110, 330, 430, 330);
    getch();
    closegraph();
}