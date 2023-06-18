#include<stdio.h>
int main(){
    int number;
    int m;
    int rev;
    scanf("%d",&number);
    while (number!=0)
    {
        m=number%10;
        rev=rev*10+m;
        number=number/10;
    }
    printf("%d\n", rev);
    return 0;
}