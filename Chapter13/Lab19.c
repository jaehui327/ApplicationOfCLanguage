//#include <stdio.h>
//#include <stdlib.h>
//
//struct Login_info {
//    char id[20];
//    char passwd[20];
//};
//
//struct Login_info *LI;
//void main()
//{
//    int num, i;
//    FILE*file;
//    file = fopen("info.dat", "wb");
//
//    printf("전체 사용자 수 :");
//    scanf("%d", &num);
//
//    LI = (struct Login_info*)malloc(sizeof(struct Login_info)*num);
//
//    for (i = 0; i<num; i++)
//    {
//        printf("이름 : ");
//        scanf("%s", LI[i].id, sizeof(LI[i].id));
//        printf("패스워드 : ");
//        scanf("%s", LI[i].passwd, sizeof(LI[i].id));
//    }
//    fwrite(&num, sizeof(int), 1, file);
//
//    for (i = 0; i<num; i++)
//    {
//        fwrite(LI[i].id, sizeof(char), 20, file);
//        fwrite(LI[i].passwd, sizeof(char), 20, file);
//    }
//    fclose(file);
//}
//
