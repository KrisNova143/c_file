//selection sort
#include<stdio.h>
int main(){
    int n,i,arr[100],temp;
    printf("Enter the number of elements to be used: ");
    scanf("%d",&n);//taking number of inputs from user
    printf("Start Entering the numbers: \n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);//taking the numbers to sort from user
    }
    printf("The list entererd: \n");
    for(i=0;i<n;i++){
        printf("%3d",arr[i]);//printing the entered number from user
    }
    printf("\n");
    for(i=0;i<n-1;i++){//i loop for initiating the sorting, goes till n-1 because (n-1)+1=n, look at j loop
        for(int j=i+1;j<n;j++){//j loop to compare, always 1 more than i loop
                if(arr[i]>arr[j]){//condition,i<j
                    temp=arr[j];//swap
                    arr[j]=arr[i];
                    arr[i]=temp;
                }
            }
        }
    printf("The sorted list: \n");//printing of the sorted list
    for(i=0;i<n;i++){
        printf("%3d",arr[i]);
    }
    return 0;
}