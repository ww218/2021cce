#include <stdio.h>///�w�w�ƧǪk
int a[10]={3,0,1,8,7,2,5,4,6,9};
int main()
{
    for(int i=0;i<10;i++)printf("%d ",a[i]);
    printf("\n");///�L�X�}�C

    for(int i=0;i<10-1;i++)///10-1,�]��10�ӤH�����u�ݭn9���洫
    {
        if(a[i]>a[i+1])///���{���洫
        {
            int temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }

    for(int i=0;i<10;i++)printf("%d ",a[i]);
    printf("\n");///�L�X�}�C

}
