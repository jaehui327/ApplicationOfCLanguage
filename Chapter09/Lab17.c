#include <stdio.h>
#include <math.h>
struct point {
    int x, y;
};
typedef struct point POINT;

struct line {
    POINT start;
    POINT end;
};

typedef struct line LINE;

void PrintLine(LINE l) {
    int x, y;
    printf("x축으로 이동할 거리를 입력하세요: ");
    scanf("%d", &x);
    printf("y축으로 이동할 거리를 입력하세요: ");
    scanf("%d", &y);
    l.start.x += x;
    l.start.y += y;
    l.end.x += x;
    l.end.y += y;
    printf("변경 후 직선 정보: 시작점=(%d, %d), 끝점=(%d, %d)\n", l.start.x, l.start.y, l.end.x, l.end.y);
}

int main(void) {
    LINE line1 = {
        {10, 20}, {50, 60}
    };
    printf("변경 전 직선 정보: 시작점=(%d, %d), 끝점=(%d, %d)\n", line1.start.x, line1.start.y, line1.end.x, line1.end.y);
    PrintLine(line1);

    return 0;
}
