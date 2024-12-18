// Mirror reflection of a character "A" about a line or axis.
#include <graphics.h>
#include <conio.h>
// Function to draw the character "A" at a given position with a
scaling factor void drawA(int x, int y, int scale)
{
    // Draw the character "A" using lines with scaling
    line(x, y, x - 10 * scale, y + 30 * scale);                         // left slant
    delay(500);                                                         // Delay for half a second
    line(x, y, x + 10 * scale, y + 30 * scale);                         // right slant
    delay(500);                                                         // Delay for half a second
    line(x - 5 * scale, y + 15 * scale, x + 5 * scale, y + 15 * scale); //
    middle cross line
        delay(500); // Delay for half a second
}
// Function to reflect the character "A" about a vertical line or
axis void reflectA(int x, int y, int reflectingLineX, int scale)
{
    // Calculate the reflected positions
    int reflectedX = reflectingLineX + (reflectingLineX - x);
    // Draw the original character "A"
    drawA(x, y, scale);
    // Draw the reflected character "A"
    drawA(reflectedX, y, scale);
}
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    int x = 200;               // X position of the original character "A"
    int y = 200;               // Y position of the original character "A"
    int reflectingLineX = 300; // X position of the reflecting line
    int scale = 2;             // Scale factor for increasing the size of the
    character "A"
        // Draw the reflecting line (vertical line)
        line(reflectingLineX, 0, reflectingLineX, getmaxy());
    delay(500); // Delay for half a second
    // Reflect and draw the character "A"
    reflectA(x, y, reflectingLineX, scale);
    getch();      // Wait for user input
    closegraph(); // Close graphics mode
    return 0;
}