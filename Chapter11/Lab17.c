#include <stdio.h>
#include <stdlib.h>
int Amatrix(int (*pa)[10]) {
    int i, j;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 10; j++)
            pa[i][j] = rand() % 10;
    }
    return 0;
}
int GetSumOfArray(int (*pa)[10], int *b) {
    int i, j;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 10; j++)
            b[i] = b[i] + pa[i][j];
    }
    return 0;
}

int main(void) {
    int a[5][10] = {0};
    int b[5] = {0};
    int i;
    int j;
    // a 매트릭스를 생성하기 위한 함수
    Amatrix(a);

    printf("생성된 a 매트릭스\n");
    for (i=0; i<5; i++)
    {
        for (j=0; j<10; j++)
            printf("  %d", a[i][j]);
        printf("\n");
    }

    GetSumOfArray(a, b);

    printf("계산된 b 매트릭스\n");
    for (i=0; i<5; i++)
        printf("  b[%d]=%d\n", i, b[i]);
}
