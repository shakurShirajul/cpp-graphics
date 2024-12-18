#include <graphics.h>
void drawCircle(int x, int y, int radius) {
    int d = 3 - 2 * radius;
    int x1 = 0;
    int y1 = radius;
    while (x1 <= y1) {   // Draw all points eight octants
        putpixel(x + x1, y + y1, WHITE);
        putpixel(x - x1, y + y1, WHITE);
        putpixel(x + x1, y - y1, WHITE);
        putpixel(x - x1, y - y1, WHITE);
        putpixel(x + y1, y + x1, WHITE);
        putpixel(x - y1, y + x1, WHITE);
        putpixel(x + y1, y - x1, WHITE);
        putpixel(x - y1, y - x1, WHITE);
        x1++;
        if (d > 0) {
            y1--;
            d += 4 * (x1 - y1) + 10;
        } else {
            d += 4 * x1 + 6;
        }
    }
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);
    int x = getmaxx() / 2;
    int y = getmaxy() / 2;
    int radius = 100;
    drawCircle(x, y, radius);

    getch();
    closegraph();
    return 0;
}
