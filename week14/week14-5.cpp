#include <stdio.h>///�x�}���k
int a[10][10],b[10][10],c[10][10];
int main()
{
	int n;
	scanf("%d",&n);

	for(int i=0;i<n;i++)///(1)Ū�JA
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0;i<n;i++)///(2)Ū�JB
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}

	for(int i=0;i<n;i++)///�⵪��
	{
		for(int j=0;j<n;j++)
		{
			c[i][j]=0;//�j��e��=0
			for(int k=0;k<n;k++)
			{
				c[i][j] += a[i][k] * b[k][j];////�j�餤�����Ӻ�
			}
			printf("%3d ",c[i][j]);	////�j���L�X��
		}
		printf("\n");
	}
}
