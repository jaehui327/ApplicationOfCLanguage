//#include <stdio.h>
//int main(int argc, char* argv[])
//{
//    char ch1, ch2;
//    int e1, e2;
//    FILE *file1;
//    file1 = fopen(argv[1], "rt");
//    FILE *file2;
//    file2 = fopen(argv[2], "rt");
//
//    for (;;)
//    {
//        e1 = fscanf(file1, "%c", &ch1, sizeof(ch1));
//        e2 = fscanf(file2, "%c", &ch2, sizeof(ch2));
//
//        if (e1 == EOF && e2 == EOF)
//        {
//            break;
//        }
//        if (e1 != e2 || ch1 != ch2)
//        {
//            printf("두 파일은 다릅니다.\n");
//            return 1;
//        }
//    }
//    fclose(file1);
//    fclose(file2);
//    printf("두 파일은 같습니다.\n");
//    return 0;
//}
//
