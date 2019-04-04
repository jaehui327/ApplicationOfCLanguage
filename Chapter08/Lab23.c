#include <stdio.h>
#include <ctype.h>
int main(void) {
    char arr[100];
    char *p = arr;
    int count = 0;

    printf("문자열을 입력하세요: ");
    fgets(arr, 100, stdin);

    while (*p != '\0') {
        if(isspace(*p++))
            count++;
    }

    printf("공백의 개수는 총 %d개입니다.\n",count);

    return 0;
}
