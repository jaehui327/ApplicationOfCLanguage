#include <stdio.h>
#include <string.h>
struct contact {
    char name[30];
    char phoneNumber[30];
};
typedef struct contact CONTACT;
int main(void) {
    CONTACT con[100];
    char answer;
    char searchName[30] = " ";
    int num = 0;
    char* p;
    while (1) {
        start:
        printf("검색할 이름: ");
        fgets(searchName, 30, stdin);
        if( (p=strchr(searchName, '\n')) != NULL ) *p = '\0';
        if (strcmp(searchName, ".") == 0) {
            break;
        }
        for (int i = 0; i < 100; i++) {
            if (strcmp(searchName, con[i].name) == 0) {
                printf("찾은 전화번호: %s\n\n", con[i].phoneNumber);
                goto start;
            }
        }
        printf("저장되지 않은 연락처입니다. 저장하시겠습니까? ");
        scanf("%c%*c", &answer);
        if (answer == 'y' | answer == 'Y') {
            printf("전화번호 입력: ");
            fgets(con[num].phoneNumber, 30, stdin);
            if( (p=strchr(con[num].phoneNumber, '\n')) != NULL ) *p = '\0';
            strcpy(con[num].name, searchName);
            num++;
            printf("\n");
        }
    }
    return 0;
}

