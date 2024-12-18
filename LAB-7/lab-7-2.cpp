//  Rotate a point about another point.
#include <graphics.h>
#include <math.h>
void rotate_point(int x, int y, int angle, int center_x, int center_y, int &x_new, int &y_new)
{
    double angle_rad = angle * (M_PI / 180.0);
    double cos_theta = cos(angle_rad);
    double sin_theta = sin(angle_rad);
    x_new = round(cos_theta * (x - center_x) - sin_theta * (y - center_y) + center_x);
    y_new = round(sin_theta * (x - center_x) + cos_theta * (y - center_y) + center_y);
}
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);
    line(0, 200, 400, 200);
    line(200, 0, 200, 400);
    int x = 100, y = 100, center_x = 200, center_y = 200;
    f
        illellipse(x + center_x, -y + center_y, 5, 5);
    f
        illellipse(center_x, center_y, 5, 5);
    int x_new, y_new;
    rotate_point(x, y, 45, center_x, center_y, x_new, y_new);
    setcolor(YELLOW);
    f
        illellipse(x_new + center_x, -y_new + center_y, 5, 5);
    line(x + center_x, -y + center_y, x_new + center_x, -y_new + center_y);
    outtextxy(x + 10 + center_x, -y - 10 + center_y, "(100, 100)");
    outtextxy(center_x + 10, center_y - 10, "(200, 200)");
    char buffer[35];
    sprintf(buffer, "(%d, %d)", x_new, y_new);
    outtextxy(x_new + 10 + center_x, -y_new - 10 + center_y, buffer);
    getch();
    closegraph();
    return 0;
}