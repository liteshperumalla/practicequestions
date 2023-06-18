#include<stdio.h>
int main(){
    int start;
    int end;
    int n;
    int count=0;
    scanf("%d", &start);
    scanf("%d", &end);
    for(int i=start; i<end; i++){
        n = start;
        for(int i=2; i<= n/2; i++){
            if(n%2==0){
                printf("NO");

            }
            else{
                count = count + 1;
                printf("Yes");
                printf("%d\n", count);
            }
        }
    }
}