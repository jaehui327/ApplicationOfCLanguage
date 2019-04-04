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

int main(void) {
    LINE line1;
    int temp;
    int x, y;
    printf("좌상단점/우하단점의 좌표를 입력하세요(left, top, right, bottom 순): ");
    scanf("%d %d %d %d", &line1.start.x, &line1.start.y, &line1.end.x, &line1.end.y);
    printf("입력된 직사각형: 좌상단점=(%d, %d), 우하단점=(%d, %d)\n", line1.start.x, line1.start.y, line1.end.x, line1.end.y);
    if (line1.start.x > line1.end.x) {
        temp = line1.start.x;
        line1.start.x = line1.end.x;
        line1.end.x = temp;
    }
    
    if (line1.start.y > line1.end.y) {
        temp = line1.start.y;
        line1.start.y = line1.end.y;
        line1.end.y = temp;
    }
    printf("수정된 직사각형: 좌상단점=(%d, %d), 우하단점=(%d, %d)\n", line1.start.x, line1.start.y, line1.end.x, line1.end.y);
    printf("한 점의 좌표를 입력하세요: ");
    scanf("%d %d", &x, &y);
    if (line1.start.x < x < line1.end.x && line1.start.y < y < line1.end.y) {
        printf("(%d, %d)는 직사각형 내부에 있습니다.\n", x, y);
    }
    return 0;
}
