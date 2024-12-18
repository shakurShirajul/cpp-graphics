#include <graphics.h>
#include <cmath>
const double PI = 3.14159265358979323846;
void drawSector(int xc, int yc, int radius, double startAngle, double endAngle, int color)
{
    double theta = startAngle * PI / 180.0;
    double dTheta = (endAngle - startAngle) * PI / 180.0;
    int x = xc + radius * cos(theta);
    int y = yc + radius * sin(theta);
    int x1, y1;
    setcolor(color);
    setfillstyle(SOLID_FILL, color);
    sector(xc, yc, startAngle, endAngle, radius, radius);
    while (dTheta >= 0.001)
    {
        theta += 0.001;
        dTheta -= 0.001;
        x1 = xc + radius * cos(theta);
        y1 = yc + radius * sin(theta);
        line(x, y, x1, y1);
        x = x1;
        y = y1;
    }
}
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);
    int xc = 200, yc = 200, radius = 100;
    double startAngle = 30.0, endAngle = 150.0;
    drawSector(xc, yc, radius, startAngle, endAngle, RED);
    getch();
    closegraph();
    return 0;
}
