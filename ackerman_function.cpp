#include<stdio.h>
int ack(int m,int n);
int main(){
	int m,n,k;
	printf("Enter first number= ");
	scanf("%d",&m);
	printf("Enter 2nd number= ");
	scanf("%d",&n);
	k=ack(m,n);
	printf("Ackerman Value= %d",k);
	return 0;
}
int ack(int m,int n){
	if(m==0){
		return n+1;
	}
	else if(m>0 && n==0){
		return ack(m-1,1);
	}
	else{
		return ack(m-1,ack(m,n-1));
	}
}
