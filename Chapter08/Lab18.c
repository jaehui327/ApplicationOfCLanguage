#include <stdio.h>
#include <string.h>
int main() {
    char arr1[100], arr2[100];
    char *p = arr1;

    printf("arr1을 문자열을 입력하세요: ");
    fgets(arr1, 100, stdin);

    for (int i = 0; i < strlen(arr1); i++) {
        arr2[i] = *p;
        p++;
    }

    printf("------------------------\n");
    printf("arr1을 arr2로 복사하겠습니다.\n");
    printf("------------------------\n");

    printf("arr1: %s", arr1);
    printf("arr2: %s", arr2);
    return 0;
}
