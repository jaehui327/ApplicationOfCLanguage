#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct font {
    char faceName[40]; // 폰트명
    unsigned int size; // 폰트 크기
    int weight; // 폰트 두께
} FONT;

int compare(const void *a, const void *b) {
    return strcmp((char*)a, (char*)b);
}

int main(void) {
    FONT* fP[3];
    char searchName[40];
    char op = ' ';
    char* p;

    fP[0] = malloc(sizeof(FONT));
    strcpy(fP[0]->faceName, "gungseo");
    fP[0]->size = 10;
    fP[0]->weight = 2;
    fP[1] = malloc(sizeof(FONT));
    strcpy(fP[1]->faceName, "batang");
    fP[1]->size = 14;
    fP[1]->weight = 2;

    while (1) {
        printf("검색할 폰트명: ");
        fgets(searchName, 30, stdin);
        if( (p=strchr(searchName, '\n')) != NULL ) *p = '\0';
        for (int i = 0; i < 2; i++) {
            if (strcmp(searchName, fP[i]->faceName) == 0) {
                printf("폰트명: %s\n", fP[i]->faceName);
                printf("폰트크기: %d\n", fP[i]->size);
                printf("폰트두께: %d\n", fP[i]->weight);
            }
        }
        printf("계속 하시겠습니까? (y/n): ");
        scanf("%c%*c", &op);
        fflush(stdin);
        if (op != 'y') {
            exit(1);
        }
    }

    return 0;
}
