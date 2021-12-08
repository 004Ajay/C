#include <stdio.h>

int main(void) {
    int num1, num2;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("\n");
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("\n");
    if(num1>num2){
    	printf("The First Number, '%d' is Greater.", num1);
    }
    else{
        printf("The Second Number, '%d' is Greater.", num2);
        }
	return 0;
}