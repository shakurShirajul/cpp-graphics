// Draw line using DDA algorithm
#include <graphics.h>
#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    int gd, gm;
    detectgraph(&gd, &gm);
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
    int x1, y1, x2, y2, dx, dy, steps, xincr, yincr;
    cout << "enter the value of x1 and y1" << endl;
    cin >> x1 >> y1;
    cout << "enter the value of x1 and y1" << endl;
    cin >> x2 >> y2;
    dx = x2 - x1;
    dy = y2 - y1;
    if (abs(dx) > abs(dy))
        steps = abs(dx);
    else
        steps = abs(dy);
    xincr = dx / steps;
    yincr = dy / steps;
    for (int i = 0; i < steps; i++)
    {
        putpixel(x1, y1, 3);
        x1 = x1 + xincr;
    }
    y1 = y1 + yincr;
    delay(5000);
    getchar();
    closegraph();
    return 0;
}