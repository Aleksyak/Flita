#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
  int n, i, j;
  int y = 0;
  int z = 0;
  int A[101][101];
  FILE *matrix;
  matrix = fopen("matrix.txt", "r");
  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      fscanf(matrix, "%d", &A[i][j]);
    }
  }
  fclose(matrix);
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      if (A[i][j] != 0 && i != j) {
        z += 1;
      }
    }
  }
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      if (A[i][j] != 0 && A[j][i] != 0 && i < j) {
        z -= 1;
      }
    }
  }
  printf("Edges:%d", z);
  for (i = 0; i < n; i++) {
    int x = 0;
    for (j = 0; j < n; j++) {
      if ((A[i][j] != 0) || (A[j][i] != 0)) {
        x = 1;
      }
    }
    if (x != 0) {
      y += 1;
    }
  }
  printf("\nNodes:%d", y);
  int u = (y - 1) * (y - 2) / 2;
  if (z > u) {
    printf("\nLinked");
  } else {
    printf("\nNot linked");
  }
}
