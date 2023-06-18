#include<stdio.h>
int main(){
    unsigned int m,n,sum = 0;
    scanf("%u", &n);
   while(n!=0){
        m=n%10;
        sum+=m;
        n/=10;
        if(n == 0 && sum >9){
            n = sum;
            sum = 0;
        }
    }
    printf("%d", sum);
    return 0;
}