#include <stdio.h>
int main(void){
    char arr1[100], arr2[100];
    char *p1 = arr1;
    char *p2 = arr2;
    printf("첫 번째 문자열을 입력하세요 : ");
    fgets(arr1, 100, stdin);
    printf("두 번째 문자열을 입력하세요 : ");
    fgets(arr2, 100, stdin);

    while (*p1 != '\0' || *p2 != '\0') {
        if(*p1 >= 'A' && *p1 <= 'Z')
            *p1 = *p1 -'A' + 'a';

        if(*p2 >= 'A' && *p2 <= 'Z')
            *p2 = *p2 -'A' + 'a';

        if(*p1 != *p2)
            break;

        if(*p1 == '\n')
            *p1 = 0;
        if(*p2 == '\n')
            *p2 = 0;

        p1++;
        p2++;
    }

    if(*p1 == '\0' && *p2 == '\0') {
        printf("%s와(과) %s는(은) 같습니다!\n", arr1, arr2);
    } else {
        printf("%s와(과) %s는(은) 같지 않습니다.\n", arr1, arr2);
    }
    return 0;
}
