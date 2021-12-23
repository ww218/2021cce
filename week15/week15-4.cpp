#include <stdio.h>///輾轉相除法,函式呼應
int box(int a ,int b)///發明盒子,算最大公因式
{
    if(a==0)return b;
    if(b==0)return a;
    return box(b,a%b);
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);

    int ans= box(a,b);
    printf("%d",ans);
}
