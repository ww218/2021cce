#include <stdio.h>///��ܱƧǪk//��!!
int a[100];
int main()
{
	for(int i=0;i<100;i++)scanf("%d",&a[i]);///1.input

	for(int i=0;i<100;i++)///3.����
	{
		for(int j=i+1;j<100;j++)///4.�k��
		{
			if(a[i]>a[j])///5.�洫
			{
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}

	for(int i=0;i<100;i++)printf("%d\n",a[i]);///2.output
}
