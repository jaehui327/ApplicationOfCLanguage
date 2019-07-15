//#include <stdio.h>
//#include<stdlib.h>
//
//void Calculate(int left, int top, int right, int bottom);
//
//int main(int argc, char*argv[]) {
//    int left, top, right, bottom;
//    left = atoi(argv[1]);
//    top = atoi(argv[2]);
//    right = atoi(argv[3]);
//    bottom = atoi(argv[4]);
//    Calculate(left, top, right, bottom);
//    return 0;
//}
//
//void Calculate(int left, int top, int right, int bottom) {
//    int width, length;
//    int circumference;
//    int area;
//    width = right - left;
//    length = bottom - top;
//    if (width < 0)
//        width *= -1;
//    if (length < 0)
//        length *= -1;
//    area = width * length;
//    circumference = 2 * width + 2 * length;
//    printf("[ 좌상단점=(%d,%d), 우하단점=(%d,%d), 폭=%d, 높이=%d\n ]", left, top, right, bottom, width, length);
//    printf("직사각형의 면적 %d\n", area);
//    printf("직사각형의 둘레 %d\n", circumference);
//}
