#include<stdio.h>
int main()
{
	int i,j,a[6][6],b[6][6];
	printf("Enter the elements of 4x4 matrix= \n");
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
	printf("The 4x4 matrix is= \n");
	for(i=0;i<=3;i++)
	{
		for(j=0;j<=3;j++)
		{
			printf("%2d",a[i][j]);
		}
		printf("\n");
	}
	printf("The diagonal matrix is= \n");
	for(i=0;i<=3;i++)
	{
		for(j=0;j<=3;j++)
		{
			if(i==j)
			{
				b[i][j]=a[i][j];
				printf("%2d",b[i][j]);
			}
			else
			{
				a[i][j]=0;
				b[i][j]=a[i][j];
				printf("%2d",b[i][j]);
			}
		}
		printf("\n");
	}
	
	return 0;
}

