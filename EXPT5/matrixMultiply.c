#include <stdio.h>

int main(){
  int rows, cols;
  printf("Enter the number of rows of the matrix: ");
  scanf("%d", &rows);
  printf("Enter the number of columns of the matrix: ");
  scanf("%d", &cols);

  int A[rows][cols], B[rows][cols], C[rows][cols];

  printf("Enter the elements of the matrix A: \n");
  for (int i = 0; i < rows; i++){
    for (int j = 0; j < cols; j++){
      printf("Enter element in row %d, column %d: ", i+1, j+1);
      scanf("%d", &A[i][j]);
    }
  }

  printf("Enter the elements of the matrix B: \n");
  for (int i = 0; i < rows; i++){
    for (int j = 0; j < cols; j++){
      printf("Enter element in row %d, column %d: ", i+1, j+1);
      scanf("%d", &B[i][j]);
    }
  }

  for (int i = 0; i < rows; i++){
    for (int j = 0; j < cols; j++){
      C[i][j] = 0;
    }
  }

  for (int i = 0; i < rows; i++){
    for (int k = 0; k < cols; k++){
      for (int j = 0; j < cols; j++){
        C[i][j] += A[i][k] * B[k][j];
      }
    }
  }

  printf("Resultant Matrix: \n");
  for (int i = 0; i < rows; i++){
    for (int j = 0; j < cols; j++){
      printf("%d ", C[i][j]);
    }
    printf("\n");
  }

}