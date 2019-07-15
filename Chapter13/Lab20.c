//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//struct Login_info {
//    char id[20];
//    char passwd[20];
//};
//
//struct Login_info *LI;
//void main()
//{
//    int num, i, j = 0;
//    char ID[20], PS[20];
//    char choice;
//    FILE*file;
//    file = fopen("info.dat", "rb");
//    fread(&num, sizeof(int), 1, file);
//    printf("패스워드 파일을 읽었습니다. %d명의 사용자 정보가 있습니다.\n", num);
//
//    LI = (struct Login_info*)malloc(sizeof(struct Login_info)*num);
//
//    for (i = 0; i<num; i++)
//    {
//        fread(LI[i].id, sizeof(char), 20, file);
//        fread(LI[i].passwd, sizeof(char), 20, file);
//    }
//
//    for (;;)
//    {
//        j = 0;
//        printf("ID를 입력하세요 : ");
//        scanf("%s", ID, sizeof(ID));
//
//        for (i = 0; i<num; i++)
//        {
//            if (strcmp(ID, LI[i].id) == 0)
//            {
//                printf("패스워드를 입력하세요 :");
//                scanf("%s", PS, sizeof(PS));
//                if (strcmp(PS, LI[i].passwd) == 0)
//                {
//                    printf("LOGIN OK!\n");
//                    j = 1;
//                }
//                break;
//            }
//        }
//
//        if (j == 0) {
//            printf("LOGIN FAILED!\n");
//        }
//        getchar();
//        printf("계속 하시겠습니까? (y/n) :");
//        scanf("%c", &choice, sizeof(choice));
//        if (choice == 'n' || choice == 'N')
//            break;
//    }
//    fclose(file);
//}
