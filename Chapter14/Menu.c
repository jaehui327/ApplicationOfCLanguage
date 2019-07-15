/* Menu.c */
#include <stdio.h>
#include "Menu.h"

// 1. 사용자에게 메뉴를 보여주고, 선택된 메뉴 항목을 리턴하는 함수
int SelectMenu(void) {
    int choice;
    
    while (1) {
        
        int result;
        
        //메뉴 출력
        printf("\n--------------------\n");
        printf("1. 연락처 추가\n");
        printf("2. 전체 연락처 목록\n");
        printf("0. 종료\n");
        printf("--------------------\n");
        printf("메뉴 선택 : ");
        
        // 메뉴 선택 입력시 에러 처리
        result = scanf("%d", &choice);
        CLEAR_INPUT();
        if (result == 0) {
            printf("잘못 입력하셨습니다. \n");
            continue;
        }
        
        // 선택된 메뉴 항목 리턴
        if (choice >= 0 && choice <= 2)
            return choice;
        else {
            printf("잘못 입력하셨습니다.\n");
            continue;
        }
    }
}

