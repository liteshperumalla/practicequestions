#include<stdio.h>

int main(){
    int size;
    int i;
    int sum = 0;
    int avg = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter elements of the array:\n");
    for(i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Contents of the array:\n");
    for(i = 0; i < size; i++) {
        printf("%d\n", arr[i]);
    }
    for(int i =0; i < size; i++){
        if(arr[i] % 2 ==0){
            printf("Even numbers : %d\n", arr[i]);
        }
        else{
            printf("Odd numbers : %d\n", arr[i]);
        }
    }
}