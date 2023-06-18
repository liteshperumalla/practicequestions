#include<stdio.h>
#include<stdbool.h>
int main(){
    int start; 
    int end;
    int count = 0;
    int year;
    bool leap = true;
    bool notleap = false;
    scanf("%d", &start);
    scanf("%d", &end);
    for(int year = start; year<=end; year++){
        if((year%4 ==0 ) && (year % 100 != 0) || (year % 400 ==0)){
            printf("%d\n", year);
            count = count + 1;
            printf("%d\n", count);
            printf("%d\n", leap);
        }
    }
}