// C Program to find largest number from 3 numbers(with all possibilities)

#include <stdio.h>
int main() {
    int num1, num2, num3; //getting three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    if(num1 > num2 && num1 > num3)
      printf("%d is Largest",num1);

    else if(num2 > num3 && num2 > num3)
            printf("%d is Largest",num2);

    else if(num3 > num1 && num3 > num2)
            printf("%d is Largest",num3);

    else if(num1 == num2)
            printf("1st & 2nd input are equal");

    else if(num1 == num3)
            printf("1st & 3rd input are equal");                
    
    else if(num2 == num3)
            printf("2nd & 3rd input are equal");

    else
        printf("Wrong Input");
    return 0;
}