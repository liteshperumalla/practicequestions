#include<stdio.h>
int main(){
    int number;
    int m;
    int sum;
    scanf("%d",&number);
    while (number!=0)
    {
        m=number%10;
        sum=sum+m;
        number=number/10;
    }
    printf("%d", sum);
    return 0;

}