//#include <stdio.h>
//
//#define MAX 5
//
//typedef struct contact {
//    char name[32];
//    char phone[32];
//}Contact;
//
//int main(int argc, char *argv[])
//{
//    Contact contact[MAX];
//    int check, i;
//    char temp[32];
//
//    do {
//        printf("1. 이름과 전화번호 입력\n");
//        printf("2. 텍스트 파일로 저장\n");
//        printf("3. 바이너리 파일로 저장\n");
//        printf("4. 텍스트 파일 읽기\n");
//        printf("5. 바이너리 파일 읽기\n");
//        printf("0. 종료\n");
//        printf("선택 : ");
//        scanf("%d", &check);
//
//        switch (check)
//        {
//            case 1:
//                for (i = 0; i < MAX; i++) {
//                    printf("이\t름 :");
//                    scanf("%s", &contact[i].name, sizeof(contact[i].name));
//                    printf("전화번호 :");
//                    scanf("%s", &contact[i].phone, sizeof(contact[i].name));
//                }
//                break;
//            case 2: {
//                FILE*fp1;
//                fp1 = fopen("contact.dat", "rb");
//                if (fp1 == NULL) {
//                    printf("%s 파일 열기 실패\n", "contact");
//                }
//                else {
//                    for (i = 0; i < MAX; i++) {
//                        fprintf(fp1, "이\t름 :%s\n", contact[i].name);
//                        fprintf(fp1, "전화번호 :%s\n", contact[i].phone);
//                    }
//                }
//                fclose(fp1);
//
//                break;
//            }
//            case 3: {
//                FILE*fp1;
//                fp1 = fopen("contact.dat", "rb");
//                if (fp1 == NULL) {
//                    printf("파일 열기 실패\n");
//                }
//                else {
//                    for (i = 0; i < MAX; i++) {
//                        fwrite(contact[i].name, sizeof(char), 32, fp1);
//                        fwrite(contact[i].phone, sizeof(char), 32, fp1);
//                    }
//                }
//                fclose(fp1);
//            }
//
//                break;
//            case 4: {
//                FILE*fp1;
//                fp1 = fopen("contact.dat", "rb");
//                if (fp1 == NULL) {
//                    printf("파일 열기 실패\n");
//                }
//                else {
//                    while (fgets(temp, 32, fp1) != NULL) {
//                        printf("%s", temp);
//                    }
//                }
//                fclose(fp1);
//                break;
//            }
//            case 5: {
//                FILE*fp1;
//                fp1 = fopen("contact.dat", "rb");
//                if (fp1 == NULL) {
//                    printf("파일 열기 실패\n");
//                }
//                else {
//                    for (i = 0; i < MAX; i++) {
//                        fread(contact[i].name, sizeof(char), 32, fp1);
//                        fread(contact[i].phone, sizeof(char), 32, fp1);
//                        printf("이\t름 :%s\n", contact[i].name);
//                        printf("전화번호 :%s\n", contact[i].phone);
//                    }
//                }
//                fclose(fp1);
//                break;
//            }
//            default:
//                break;
//        }
//    } while (check != 0);
//    getchar();
//}
