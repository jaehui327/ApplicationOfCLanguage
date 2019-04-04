#include <stdio.h>
#include <string.h>

struct contact {
    char name[30];
    char phoneNumber[30];
};
typedef struct contact CONTACT;

int main(void) {
    CONTACT con[5];
    char *p;
    int i = 0;
    for (i = 0; i < 5; i++){
        printf("이   름 : ");
        fgets(con[i].name, 30, stdin);
        if( (p=strchr(con[i].name, '\n')) != NULL ) *p = '\0';
        printf("전화번호 : ");
        fgets(con[i].phoneNumber, 30, stdin);
        if( (p=strchr(con[i].phoneNumber, '\n')) != NULL ) *p = '\0';
    }
    printf("  -- 전체 연락처 목록 --  \n");
    for (i = 0; i < 5; i++){
        printf("%-10s%s\n", con[i].name, con[i].phoneNumber);
    }
    return 0;
}
