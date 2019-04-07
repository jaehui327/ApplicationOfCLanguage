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
    int i = 0, j = 0;
    int num;
    int op;
    char tmp[30];
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

    while (1) {
        printf("\n0.종료 \n1.이름순 출력 \n2.전화번호순 출력 \n출력방법 선택 : ");
        scanf("%d%*c", &op);
        switch (op) {
            case 0: exit(1);
            case 1:
                for (i = 0; i< num - 1; i++) {
                    for (j = 0; j< num - 1 - i; j++) {
                        if (strcmp(conP[j]->name, conP[j + 1]->name) > 0) {
                            strcpy(tmp, conP[j]->name);
                            strcpy(conP[j]->name, conP[j + 1]->name);
                            strcpy(conP[j + 1]->name, tmp);
                            strcpy(tmp, conP[j]->phoneNumber);
                            strcpy(conP[j]->phoneNumber, conP[j + 1]->phoneNumber);
                            strcpy(conP[j + 1]->phoneNumber, tmp);
                        }
                    }
                }
                printf("  -- 전체 연락처 목록 --  \n");
                for (i = 0; i < num; i++){
                    printf("%-10s%s\n", conP[i]->name, conP[i]->phoneNumber);
                }
                break;
            case 2:
                for (i = 0; i< num - 1; i++) {
                    for (j = 0; j< num - 1 - i; j++) {
                        if (strcmp(conP[j]->phoneNumber, conP[j + 1]->phoneNumber) > 0) {
                            strcpy(tmp, conP[j]->phoneNumber);
                            strcpy(conP[j]->phoneNumber, conP[j + 1]->phoneNumber);
                            strcpy(conP[j + 1]->phoneNumber, tmp);
                            strcpy(tmp, conP[j]->name);
                            strcpy(conP[j]->name, conP[j + 1]->name);
                            strcpy(conP[j + 1]->name, tmp);
                        }
                    }
                }
                printf("  -- 전체 연락처 목록 --  \n");
                for (i = 0; i < num; i++){
                    printf("%-10s%s\n", conP[i]->name, conP[i]->phoneNumber);
                }
                break;
            default:
                break;
        }
    }
    return 0;
}
