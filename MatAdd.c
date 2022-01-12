//C Program to perform Matrix Addition.

#include <stdio.h>
//Function to print Matrix.
int PrintMatrix(int p[10][10], int rows, int columns){
    int i, j;
    for(i=0; i<rows; i++){
        for(j=0; j<columns; j++){
        printf("\t%d", p[i][j]);
        }
    printf("\n");
    }
}

//Function to Add Matrix.
int AddMatrix(int matrix1[10][10], int matrix2[10][10], int matrix3[10][10], int rows, int columns){
    int i, j;
    for(i=0; i<rows; i++){
        for(j=0; j<columns; j++){
        matrix3[i][j]=matrix1[i][j]+matrix2[i][j];
        }
    }
}
//Main Function
int main(){
int matrix1[10][10], matrix2[10][10], matrix3[10][10];
int i, j, rows, columns, p, a;
printf("Enter no. of rows & columns:"); //Getting no. of Rows & Columns
scanf("%d %d", &rows, &columns);

//Simultaneously entering values of 1st & 2nd Matrices.
printf("\n\n\nEnter value of 1st & 2nd Matrix\n");
printf("\t\nIn the format 1 2 <enter> 5 3 <enter> 6 9\n");

for(i=0; i<rows; i++){
    for(j=0; j<columns; j++){
        printf("\nEnter a[%d][%d] value:", i+1, j+1);
        scanf("%d %d", &matrix1[i][j], &matrix2[i][j]);
    }
}

//Printing Matrix 1
printf("\t\t\nInput Matrix 1\n");
PrintMatrix(matrix1, rows, columns);

//Printing Matrix 2
printf("\t\t\nInput Matrix 2\n");
PrintMatrix(matrix2, rows, columns);

//Printing Sum of Matrix 1 & 2
printf("\t\t\nSum of Matrics\n");
AddMatrix(matrix1, matrix2, matrix3, rows, columns);
PrintMatrix(matrix3, rows, columns);
}