#include <stdio.h>
int a[100];
int main()
{
	for(int i=0;i<100;i++)///1.intput
	{
		scanf("%d",&a[i]);
	}
	for(int k=0;k<100-1;k++)///5.�@���]100-1��
	{
		for(int i=0;i<100-1;i++)///4.����k���@��
		{
			if(a[i]>a[i+1])///3.���
			{
				int temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}
		}

	}
	for(int i=0;i<100;i++)///2.output
	{
		printf("%d\n",a[i]);
	}
}
