#include <stdio.h>
int main()
{
    int n=3;

    while(n>0){
        printf("while(判斷n>0)有進來喔, n:%d\n",n);

        n--;
    }
    printf("最後離開迴圈,n:%d\n",n);

}
