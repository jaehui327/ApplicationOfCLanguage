#include <stdio.h>
int main(void) {
    float arr[6] = {100.0, 92.7, 67.0, 89.6, 93.5};
    float *p = arr;
    float sum = 0, avg = 0;

    for (int i = 0; i < 5; i++) {
        printf("%.2f, ", arr[i]);
    }
    printf("의 평균을 구하겠습니다.\n");

    while (*p != '\0') {
        sum += *p;
        p++;
    }

    avg = sum / 5;

    printf("평균은 %.2f 입니다.\n", avg);
    return 0;
}
