#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct contact {
    char name[30];
    char phoneNumber[30];
};
typedef struct contact CONTACT;
int main(void) {
    CONTACT *conP[100];
    char answer;
    char searchName[30] = " ";
    int num = 0;
    char* p;
    for (int i = 0; i < sizeof(conP) / sizeof(CONTACT *); i++) { // 요소 개수만큼 반복
        conP[i] = malloc(sizeof(struct contact));    // 각 요소에 구조체 크기만큼 메모리 할당
    }
    while (1) {
        start:
        printf("검색할 이름: ");
        fgets(searchName, 30, stdin);
        if( (p=strchr(searchName, '\n')) != NULL ) *p = '\0';
        if (strcmp(searchName, ".") == 0) {
            for (int i = 0; i < sizeof(conP) / sizeof(CONTACT *); i++) { // 요소 개수만큼 반복
                free(conP[i]);    // 각 요소의 동적 메모리 해제
            }
            break;
        }
        for (int i = 0; i < 100; i++) {
            if (strcmp(searchName, conP[i]->name) == 0) {
                printf("찾은 전화번호: %s\n\n", conP[i]->phoneNumber);
                goto start;
            }
        }
        printf("저장되지 않은 연락처입니다. 저장하시겠습니까? ");
        scanf("%c%*c", &answer);
        if (answer == 'y' | answer == 'Y') {
            printf("전화번호 입력: ");
            fgets(conP[num]->phoneNumber, 30, stdin);
            if( (p=strchr(conP[num]->phoneNumber, '\n')) != NULL ) *p = '\0';
            strcpy(conP[num]->name, searchName);
            num++;
            printf("\n");
        }
    }
    return 0;
}

