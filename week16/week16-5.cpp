#include <stdio.h>///字串的迴圈
char line [300];
int main()
{
    printf("請輸入你的字串: ");
    scanf("%s",line);

    printf("剛剛輸入的是=%s=",line);
    int i=0;
    int ans=0;
    while(line[i]!='\0')
    {
        if(line[i]=='1')ans++;
        i++;
    }
    printf("你剛剛輸入了%d個1\n",ans);
}

