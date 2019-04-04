#include <stdio.h>
union color {
    unsigned char rgb[4];
    unsigned int dword;
};
int main()
{
    unsigned int red, green, blue;
    printf("red를 입력하세요(0~255)   : ");
    scanf("%d", &red);
    red <<= 16;
    printf("green를 입력하세요(0~255) : ");
    scanf("%d", &green);
    green <<= 8;
    printf("blue를 입력하세요(0~255)  : ");
    scanf("%d", &blue);
    
    union color color1 = {0};
    color1.dword = red|green|blue;
    printf("color1.dword = %06X\n", color1.dword);
    return 0;
}
