#include<stdio.h>
void main(){
    int arr[5];

    printf("Enter array elements:\n");
    for(int i=0; i<5;i++){
        scanf("%d",&arr[i]);
    }

    int sum=0;

    for(int i=0; i<5;i++){
       sum =sum+arr[i];
        }

        printf("%d", sum);
    }
