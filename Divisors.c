#include <stdio.h>

int main(){
	int num;
	int num2;
	int num3;
	scanf("%d", &num);   
	scanf("%d", &num2); 
	scanf("%d", &num3);  
	for (int i= num; i<=num2; i++){
		printf("%d\n", i);
	}        	                  // Reading input from STDIN
	printf("Input number is %d.\n", num);
	printf("Input number is %d.\n", num2);
	printf("Input number is %d.\n", num3);         // Writing output to STDOUT
}