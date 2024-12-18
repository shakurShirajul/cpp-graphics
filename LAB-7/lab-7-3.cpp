//  Rotate a line about a point
#include <graphics.h>
#include <math.h>
// Function to rotate a point about another point by a given angle in
degrees void rotate_point(int x, int y, int angle, int center_x, int center_y, int &x_new, int &y_new)
{
    double angle_rad = angle * (M_PI / 180.0);
    double cos_theta = cos(angle_rad);
    double sin_theta = sin(angle_rad);
    x_new = round(cos_theta * (x - center_x) - sin_theta * (y - center_y) + center_x);
    y_new = round(sin_theta * (x - center_x) + cos_theta * (y - center_y) + center_y);
}
// Function to rotate a line about a point by a given angle in degrees
void rotate_line(int x1, int y1, int x2, int y2, int angle, int center_x, int center_y, int &x1_new, int &y1_new, int &x2_new, int &y2_new)
{
    rotate_point(x1, y1, angle, center_x, center_y, x1_new, y1_new);
    rotate_point(x2, y2, angle, center_x, center_y, x2_new, y2_new);
}
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL); // Initialize graphics mode
    // Draw the x and y axes
    line(0, 200, 400, 200);
    line(200, 0, 200, 400);
    // Draw the original line and center point
    int x1 = 100, y1 = 100, x2 = 200, y2 = 200, center_x = 200, center_y = 200;
    line(x1 + center_x, -y1 + center_y, x2 + center_x, -y2 + center_y);
    f
        illellipse(center_x, center_y, 5, 5);
    // Rotate the line by 45 degrees about the center point
    int x1_new, y1_new, x2_new, y2_new;
    rotate_line(x1, y1, x2, y2, 45, center_x, center_y, x1_new, y1_new,
                x2_new, y2_new);
    // Draw the rotated line
    setcolor(RED);
    line(x1_new + center_x, -y1_new + center_y, x2_new + center_x, -y2_new + center_y);
    getch();      // Wait for user input
    closegraph(); // Close graphics mode
    return 0;
}