#include <stdio.h>
#include <stdlib.h>///為了system()系統
///自己寫了一個函式main()
int main()
{
    printf("下面是system() 出來的結果\n");
    system("dir"); ///呼叫別人的函式system()
    printf("*");
    return 0;
}
