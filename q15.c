// 1 01 101 0101 10101

#include<stdio.h>

int main()
{
    for(int i=1;i<=5;i++){
        for(int j=i;j>=1;j--){
            printf("%d",j%2);
        }
    printf("\n");
    }
}