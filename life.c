#include <stdio.h>

int main(){
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	scanf("%d", &num);  
	scanf("%d", &num2);
	scanf("%d", &num3);
	scanf("%d", &num4);
	scanf("%d", &num5);  
	//for(int i = num; i<num5; i++){
		//if( == "42"){
			//break;
		//}
		if(num < num2 && num <num3 && num <num4 && num < num5){
			int smallest = num;
			printf("%d\n", smallest);
		}
		else if (num2 < num3 && num2 < num4 && num2 < num5){
			int second_smallest = num2;
			printf("%d\n", second_smallest);
		}
		else if(num3 < num4 && num3 < num5){
			int third_smallest = num3;
			printf("%d\n", third_smallest);
		}
		else if(num4 < num5){
			int fourth_smallest = num4;
			printf("%d\n", fourth_smallest);
		}
		else{
			printf("%d\n", num5);
		}
	}                 	                  // Reading input from STDIN

	          // Writing output to STDOUT
