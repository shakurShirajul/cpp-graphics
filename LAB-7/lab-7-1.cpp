// 1.Rotateapointaboutorigin
#include <graphics.h>
#include <math.h>
voidrotate_point(intx, inty, intangle, int &x_new, int &y_new)
{
    doubleangle_rad = angle * (M_PI / 180.0);
    doublecos_theta = cos(angle_rad);
    doublesin_theta = sin(angle_rad);
    x_new = round(x * cos_theta - y * sin_theta);
    y_new = round(x * sin_theta + y * cos_theta);
}
intmain()
{
    intgd = DETECT, gm;
    initgraph(&gd, &gm, NULL);
    // Drawthexandyaxes
    line(0, 200, 400, 200);
    line(200, 0, 200, 400);
    intx = 100, y = 100;
    fillellipse(x + 200, -y + 200, 5, 5);
    // Rotatethepointby45degrees
    intx_new, y_new;
    rotate_point(x, y, 45, x_new, y_new);
    // Drawtherotatedpoint
    setcolor(RED);
    fillellipse(x_new + 200, -y_new + 200, 5, 5);
    // Drawalinebetweentheoriginalpointandtherotatedpoint
    line(x + 200, -y + 200, x_new + 200, -y_new + 200);
    getch();
    closegraph();
    return 0;
}