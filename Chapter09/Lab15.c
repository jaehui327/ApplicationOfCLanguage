#include <stdio.h>
struct item_info {
    char title[128];
    char content[10];
    char category[10];
};
int main( )
{
    struct item_info item1 = { "개념을 콕콕 잡아주는 C 프로그래밍",
                                "도서",
                                "교재"};
    printf("Item Information\n");
    printf(" title : %s\n", item1.title);
    printf(" type : %s,%s\n", item1.content, item1.category);
    return 0;
}
