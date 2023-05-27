#include<stdio.h>

int main()
{
	int n,i,c=1;
	
	printf("Enter the number:");
	scanf("%d",&n);
	
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			c++;
			break;
		}
	}
	if(c==2 && n!=1)
	{
		printf("%d is a prime number\n",n);
		
	}
	else{
		printf("%d is a not a prime number\n",n);
	}
	return 0;
}
