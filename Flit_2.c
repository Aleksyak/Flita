#define _CRT_SECURE_NO_WARNINGS
#include <malloc.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  int n;
  int A[101][101];
  FILE *matrix, *graph;
  matrix = fopen("matrix.txt","r");
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      fscanf(matrix, "%d", &A[i][j]);
    }
  }
  fclose(matrix);

  graph = fopen("graph.txt", "w");
  fprintf(graph, "graph {\n");
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (A[i][j] != 0) {

        fprintf(graph, "%d", i + 1);
        fprintf(graph, " -> ");
        fprintf(graph, "%d\n", j + 1);
      }
    }
  }
  fprintf(graph, "}");
  system("dot -Tpng graph.txt > graph_img.png");
  return 0;
}
