#include <stdio.h>
int main(void) {
    int array[10] = {15, 23, 7, 78, 34, 67, 45, 36, 90, 71};
    int i = 0;
    int increase = 0;
    int *p = array;

    printf("[ 원본  배열 ] ");
    for(i = 0; i < 10l; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    printf("증가량을 입력하세요 : ");
    scanf("%d", &increase);
    printf("[ 증가후 배열 ] ");
    for (i = 0; i < 10; i++) {
        printf("%d ", *(p + i) + increase);
    }
    return 0;
}
