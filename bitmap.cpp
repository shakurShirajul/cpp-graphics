// Bitmap Font
#include <graphics.h>
// Define the bitmap font texture for the character 'ঢ' with larger size
const char fontDh[16][17] =
    {
        "0000111111000000",
        "0011000001100000",
        "0110000000110000",
        "1100000000011000",
        "1100000000011000",
        "1100000000011000",
        "1100000000110000",
        "1100000001110000",
        "1100000111100000",
        "0111111110000000",
        "0011111110000000",
        "0000000011000000",
        "0000000011000000",
        "1111111110000000",
};

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
                        putpixel(x + col * 4 + i, y + row * 4 + j, WHITE); // Assuming white color for text
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
    // Render character 'ঢ' with larger size using the bitmap font
    renderCharacter(fontDh, 50, 50);
    delay(5000);
    closegraph();
    return 0;
}
