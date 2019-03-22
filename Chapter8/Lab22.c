#include <stdio.h>
#include <string.h>
int main(void) {
    char arr[100];
    char *p = arr;

    printf("문자열을 입력하세요: ");
    fgets(arr, 100, stdin);

    printf("-----------------------\n");
    printf("문자열을 역순으로 만들겠습니다.\n");
    printf("-----------------------");

    p += strlen(arr);

    while (p >= arr) {
        printf("%c", *p);
        p--;
    }
    printf("\n");
    return 0;
}
