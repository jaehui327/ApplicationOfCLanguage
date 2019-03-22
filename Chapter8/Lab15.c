#include <stdio.h>
int main(void) {
    int arr1[5] = {10, 20, 30, 40, 50};
    int *pi = arr1; //pi는 0x12FF60번지
    char arr2[] = "abcdefg";
    char *pc = arr2; //pc는 0x12FF40번지
    double arr3[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double *pd = arr3; //pd는 0x12FF00번지
    // (1) pi + 2
    printf("%p\n", pi + 2);
    // (2) *(pi + 1)
    printf("%d\n", *(pi + 1));
    // (3) pc[3]
    printf("%c\n", pc[3]);
    // (4) %arr3[3] = &arr3[1]
    printf("%p\n", &arr3[3] - &arr3[1]);
    // (5) &pd[1]
    printf("%p\n", &pd[1]);
    return 0;
}
