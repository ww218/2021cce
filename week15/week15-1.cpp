#include <stdio.h>///最大公因數
int main()
{
    int a ,b;
    scanf("%d %d",&a,&b);///a=12,b=6

    int ans=1;
    for(int i=1;i<=a;i++)///1,2,3,4,5,...,12
    {
        if(a%i==0 && b%i==0 )ans=i;///ans=1,2,3,6
    }
    printf("%d",ans);///ans=6(最大)

}
