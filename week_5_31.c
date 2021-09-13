#include <stdio.h>

int main()
{
    int x[10],sum,sim,result;
    printf("input 10 number:");
    for(int i=0;i<10;i++){
        scanf("%d",&x[i]);
    }
    sim = x[0]+x[2]+x[4]+x[6]+x[8];
    sum = x[1]+x[3]+x[5]+x[7]+x[9];

    result= sum-sim;
    printf("Data in Area :");
    for(int i =0;i<10;i++){
        printf("%d\t",x[i]);
    }
    printf("\nResult ; %d",result);
}