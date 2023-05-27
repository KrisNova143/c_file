#include<stdio.h>
int main()
{
	int i,j,k,l,a[6][6],b[6][6],c[6][6];
	printf("Enter the elements of first 4x4 matrix= \n");
	printf("Enter the elements of the first row= \n");
	for(i=0;i<=0;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the elements of the second row= \n");
	for(i=1;i<=1;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the elements of the third row= \n");
	for(i=2;i<=2;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the elements of the fourth row= \n");
	for(i=3;i<=3;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("Enter the elements of second 4x4 matrix= \n");
	printf("Enter the elements of the first row= \n");
	for(k=0;k<=0;k++)
	{
		for(l=0;l<4;l++)
		{
			scanf("%d",&b[k][l]);
		}
	}
	printf("Enter the elements of the second row= \n");
	for(k=1;k<=1;k++)
	{
		for(l=0;l<4;l++)
		{
			scanf("%d",&b[k][l]);
		}
	}
	printf("Enter the elements of the third row= \n");
	for(k=2;k<=2;k++)
	{
		for(l=0;l<4;l++)
		{
			scanf("%d",&b[k][l]);
		}
	}
	printf("Enter the elements of the fourth row= \n");
	for(k=3;k<=3;k++)
	{
		for(l=0;l<4;l++)
		{
			scanf("%d",&b[k][l]);
		}
	}
	printf("The first 4x4 matrix is= \n");
	for(i=0;i<=3;i++)
	{
		for(j=0;j<=3;j++)
		{
			printf("%2d",a[i][j]);
		}
		printf("\n");
	}
	printf("The second 4x4 matrix is= \n");
	for(k=0;k<=3;k++)
	{
		for(l=0;l<=3;l++)
		{
			printf("%2d",b[k][l]);
		}
		printf("\n");
	}
	
	return 0;
}
