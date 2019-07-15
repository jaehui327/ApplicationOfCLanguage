/* Menu_h */
#ifndef Menu_h
#define Menu_h

// 메뉴 항목에 대한 매크로 상수 정의
#define ADD_STUDENT 1
#define LIST_BY_NAME 2
#define QUIT_PROGRAM 0

#define CLEAR_INPUT() while( getchar() != '\n');

#include <stdio.h>

// 1. 사용자에게 메뉴를 보여주고, 선택된 메뉴 항목을 리턴하는 함수
int SelectMenu(void);

#endif
