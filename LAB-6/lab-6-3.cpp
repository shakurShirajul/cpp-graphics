//  BitMap Font
#include <graphics.h>
// Define the bitmap font textures for characters 'A', 'D', 'I', and 'B' with
larger size const char fontA[16][17] =
    {
        "0000000110000",
        "0000011110000",
        "0000110011000",
        "0001100001100",
        "0011000000110",
        "0110000000110",
        "0111111111111",
        "0110000000011",
        "1100000000011",
        "1100000000011",
        "1100000000011",
        "1100000000011",
};
const char fontD[16][17] =
    {
        "1111111111100000",
        "1100000000111000",
        "1100000000011000",
        "1100000000011000",
        "1100000000011000",
        "1100000000011000",
        "1100000000011000",
        "1100000000011000",
        "1100000000011000",
        "1100000000111000",
        "1111111111110000"};
const char fontI[16][17] =
    {
        "0000000000000000",
        "0000000000000000",
        "0000111111110000",
        "0000000111000000",
        "0000000111000000",
        "0000000111000000",
        "0000000111000000",
        "0000000111000000",
        "0000000111000000",
        "0000000111000000",
        "0000000111000000",
        "0000111111110000",
};
// Define bitmap font texture for character 'B' with larger size
const char fontB[16][17] =
    {
        "0000000000000000",
        "0000000000000000",
        "1111111111000000",
        "1100000000110000",
        "1100000000001100",
        "1100000000011000",
        "1100000000110000",
        "1100000111100000",
        "1100000000011000",
        "1100000000001100",
        "1100000000110000",
        "1111111111000000",
};
// Define character width and height
const int charWidth = 16;
const int charHeight = 16;
// Function to render a character at a specified position
void renderCharacter(const char (*character)[17], int x, int y)
{
    for (int row = 0; row < charHeight; row++)
    {
        for (int col = 0; col < charWidth; col++)
        {
            if (character[row][col] == '1')
            {
                for (int i = 0; i < 4; i++) // Scale up by a factor of 4
                {
                    for (int j = 0; j < 4; j++)
                    {
                        putpixel(x + col * 4 + i, y + row * 4 + j, WHITE); //
 Assuming white color for text
                    }
                }
            }
        }
    }
}
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    // Clear the canvas
    cleardevice();
    // Render characters 'A', 'D', 'I', and 'B' with larger size using the
    bitmap font
        renderCharacter(fontA, 50, 50);
    renderCharacter(fontD, 150, 50);
    renderCharacter(fontI, 250, 50);
    renderCharacter(fontB, 350, 50);
    delay(5000);
    closegraph();
    return 0;
}