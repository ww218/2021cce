#include <stdio.h>///¯x°}Âà¸m
int a[1000][1000];
int main()
{
	int n;
	scanf("%d",&n);

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%3d",a[j][i]);
		}
		printf("\n");
	}
}
