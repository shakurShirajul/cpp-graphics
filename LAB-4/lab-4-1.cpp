#include <iostream>
#include <cmath>
#include <graphics.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int xc = 300, yc = 200;
    int radius = 100;

    for (int theta = 0; theta <= 360; theta++)
    {
        int x = xc + static_cast<int>(radius * cos(theta * 3.14159 / 180));
        int y = yc + static_cast<int>(radius * sin(theta * 3.14159 / 180));

        putpixel(x, y, YELLOW);
    }

    delay(10000);
    closegraph();
    return 0;
}
