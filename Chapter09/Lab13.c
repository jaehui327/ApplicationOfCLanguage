#include <stdio.h>
union color {
    unsigned char rgb[4];
    unsigned int dword;
};
int main()
{
    union color color1 = {0};
    color1.dword = 0x00CC00FF;
    printf("red = %2X, green = %2X, blue = %2X\n",
           color1.rgb[0], color1.rgb[1], color1.rgb[2]);
    return 0;
}
