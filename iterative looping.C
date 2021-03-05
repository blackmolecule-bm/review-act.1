#include <stdio.h>

int main(){
    int num,r,sum=0,t;

    printf("Input any integer: ");
    scanf("%d",&num);

    for(t=num;num!=0;num=num/10){
         r=num % 10;
         sum=sum*10+r;
    }
printf("The revised is %d", sum);

return 0;
}
