#include <stdio.h>///字串的迴圈
char line [300];
int main()
{
    printf("請輸入你的字串: ");
    scanf("%s",line);///不用&

    printf("剛剛輸入的是=%s=",line);
}
