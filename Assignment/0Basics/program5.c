#include <stdio.h>
void main(){
    int num;
    printf("Input:");
    scanf("%d",&num);

    if (num%5==0&&num%11==0){
        printf("%d is divisible by 5 & 11\n",num);
    }else{
        printf("%d is not divisible by 5 & 11\n",num);
    }
}

// Input:55
// 55 is divisible by 5 & 11

// Input:15
// 15 is not divisible by 5 & 11