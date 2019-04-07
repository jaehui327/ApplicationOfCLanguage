#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct contact {
    char name[30];
    char phoneNumber[30];
};
typedef struct contact CONTACT;

int main(void) {
    char *p;
    int i = 0;
    int num;
    printf("저장할 연락처의 개수 : ");
    scanf("%d%*c", &num);
    CONTACT *conP[num];
    for (i = 0; i < num; i++){
        conP[i] = malloc(sizeof(CONTACT));
        printf("이   름 : ");
        fgets(conP[i]->name, 30, stdin);
        if( (p=strchr(conP[i]->name, '\n')) != NULL ) *p = '\0';
        printf("전화번호 : ");
        fgets(conP[i]->phoneNumber, 30, stdin);
        if( (p=strchr(conP[i]->phoneNumber, '\n')) != NULL ) *p = '\0';
    }
    printf("  -- 전체 연락처 목록 --  \n");
    for (i = 0; i < num; i++){
        printf("%-10s%s\n", conP[i]->name, conP[i]->phoneNumber);
    }
    return 0;
}

