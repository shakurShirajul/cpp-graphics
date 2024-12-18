// Draw Line using Bresenham's line algorithm
#include <graphics.h>
#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    int gd, gm;
    detectgraph(&gd, &gm);
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
    int x1, y1, x2, y2, dx, dy, p;
    cout << "enter the value of x1 and y1" << endl;
    cin >> x1 >> y1;
    cout << "enter the value of x1 and y1" << endl;
    cin >> x2 >> y2;
    dx = x2 - x1;
    dy = y2 - y1;
    p = 2 * dx * dy;
    putpixel(x1, y1, 3);
    for (int k = 0; k < dx; k++)
    {
        if (p < 0)
        {
            x1++;
            p = p + 2 * dy;
        }
        else
        {
            x1++;
            y1++;
            p = p + 2 * dy - 2 * dx;
        }

        putpixel(x1, y1, 3);
    }

    delay(5000);

    getchar();
    closegraph();
    return 0;
}