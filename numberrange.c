#include<stdio.h>
int main(){
    int sum=0;
    int start;
    int end;
    scanf("%d", &start);
    scanf("%d", &end);
    for(int i=start; i<=end; i++ ){
        sum=sum+i;
        printf("%d\n", sum);
    }
}