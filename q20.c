// -  1-  -1-  1-1-  -1-1-

#include<stdio.h>

int main()
{
    for(int i=1;i<=5;i++){
        for(int j=i;j>=1;j--){
            if(j%2==0){
                printf("1");
            }else{
                printf("-");
            }
        }
    printf("\n");
    }
}