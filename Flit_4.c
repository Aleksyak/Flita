#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
  int n;
  int y = 0;
  int z = 0;
  int A[101][101];
  FILE *matrix;
  matrix = fopen("matrix.txt", "r");
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      fscanf(matrix, "%d", &A[i][j]);
    }
  }
  fclose(matrix);

  for (int i = 0 ; i<n; i++){
      if(A[i][i]==1){
        y++;
      }
  }
  printf("Petly:%d",y);

  return 0;
}
