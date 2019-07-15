/* Contact.c */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Contact.h"
#include "Menu.h"

// 2. CONTACT 구조체 배열을 동적 메모리에 할당하고 초기화 하는 함수
CONTACT* Initialize(int totalCnt) {
    // 동적 메모리 할당
    CONTACT *p = malloc(sizeof(CONTACT) *totalCnt);
    if (p != NULL)
        // 동적 메모리 초기화
        memset(p, 0, sizeof(CONTACT) *totalCnt);
    return p;
}

// 3. 연락처 정보를 입력받는 함수
int AddContactInfo(CONTACT *contacts, int maxCnt, int *pCurCnt) {
    CONTACT *p = NULL;
    int ring;
    
    if (maxCnt == *pCurCnt)
        return 0;
    
    p = &contacts[*pCurCnt];
    
    do {
    getName:
        printf("\n이     름 : ");
        fgets(p->name, MAX_STR, stdin);
        // 줄바꿈 문자 제거
        p->name[strlen(p->name) - 1] = '\0';
        for(int i = 0; i < strlen(p->name); i++) {
            if (p->name[i] == ' ')
                goto getName;
        }
    } while(!strcmp(p->name, ""));
    
    do {
    getPhone:
        printf("전화번호 : ");
        fgets(p->phone, MAX_STR, stdin);
        // 줄바꿈 문자 제거
        p->phone[strlen(p->phone) - 1] = '\0';
        for(int i = 0; i < strlen(p->phone); i++) {
            if ((!(p->phone[i] == 45) && (p->phone[i] < 48)) || (p->phone[i] > 57))
                goto getPhone;
        }
    } while(!strcmp(p->phone, ""));
    
    do {
        printf("[1.전화벨 2.피아노 3.마림바 4.하프] 벨소리 선택 : ");
        scanf("%d", &ring);
        CLEAR_INPUT();
    } while (ring < 1 || ring > 4);
    p->ring = ring - 1;
    
    (*pCurCnt)++;
    return *pCurCnt;
}

// 4. 연락처 정보를 이름순으로 출력하는 함수
void ListByName(CONTACT *contacts, int cnt) {
    if (cnt == 0) {
        printf("출력할 내용이 없습니다.\n");
        return;
    }
    qsort(contacts, cnt, sizeof(CONTACT), CompareByName);
    PrintAllContacts(contacts, cnt);
}

// 5. CONTACT 구조체 배열을 출력하는 함수
void PrintAllContacts(const CONTACT *contacts, int cnt) {
    int i;
    const char* ringtones[] = {
        "전화벨", "피아노", "마림바", "하프"
    };
    
    printf("\n========================================\n");
    printf("이름        전화번호          벨소리\n");
    printf("========================================\n");
    for (i = 0; i < cnt; i++) {
        printf("%-10s %-14s %s\n", contacts[i].name, contacts[i].phone, ringtones[contacts[i].ring]);
    }
    printf("========================================\n");
}

int CompareByName(const void* e1, const void* e2) {
    const CONTACT *p1 = (const CONTACT*) e1;
    const CONTACT *p2 = (const CONTACT*) e2;
    // 오름차순 정렬
    return strcmp(p1->name, p2->name);
}
