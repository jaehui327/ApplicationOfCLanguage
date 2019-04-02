#include <stdio.h>
int main(void) {
    int arr[5] = {10, 20, 30, 40, 50};
    int *p = NULL;
    int i;

    p = arr;
    for(i = 0; i < 5; i++){
        printf("%d ", *p + 1);
        p++;
    }
    printf("\n");
    return 0;
}
