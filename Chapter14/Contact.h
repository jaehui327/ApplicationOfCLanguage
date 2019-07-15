/* Contact_h */
#ifndef Contact_h
#define Contact_h

#define MAX_STR 32

enum ringtone { old_phone, digital, piano, marimba, harp };

typedef struct contact {
    char name[MAX_STR]; // 이름
    char phone[MAX_STR]; // 전화번호
    enum ringtone ring; // 벨소리
} CONTACT;

// 2. CONTACT 구조체 배열을 동적 메모리에 할당하고 초기화 하는 함수
CONTACT* Initialize(int totalCnt);
// 3. 연락처 정보를 입력받는 함수
int AddContactInfo(CONTACT *contacts, int maxCnt, int *pCurCnt);
// 4. 연락처 정보를 이름순으로 출력하는 함수
void ListByName(CONTACT *contacts, int cnt);
// 5. CONTACT 구조체 배열을 출력하는 함수
void PrintAllContacts(const CONTACT *contacts, int cnt);
int CompareByName(const void* e1, const void* e2);

#endif
