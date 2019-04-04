#include <stdio.h>
#include <math.h>
struct point {
    int x, y;
};
typedef struct point POINT;

struct line {
    POINT start;
    POINT end;
}line1;
typedef struct line LINE;

int main(void) {
    double dist;
    printf("좌표 x1의 값을 입력하세요 (ex) 1 3) : ");
    scanf("%d %d", &line1.start.x, &line1.start.y);
    printf("좌표 x2의 값을 입력하세요 (ex) 3 5) : ");
    scanf("%d %d", &line1.end.x, &line1.end.y);
    dist = sqrt(pow((double)line1.start.x - (double)line1.end.x, 2) + pow((double)line1.start.y - (double)line1.end.y, 2));
    printf("두 점 사이의 거리는 %.2lf입니다.\n", dist);
    return 0;
}
