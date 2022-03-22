#include <stdio.h>
int main() {
  int a1[100];
  int b1[100];
  int a2[100] = {0};
  int b2[100] = {0};
  int a3[100];
  int b3[100];
  int raz1, raz2, ku, kd, q, e, i, j;
  int k = 0;

  printf("Ввод размера первого массива \n");
  scanf("%d", &raz1);
  printf("Ввод первого массива \n");
  for (i = 0; i < raz1; i++) {
    scanf("%d", &a1[i]);
  }
  printf("Ввод размера второго массива \n");
  scanf("%d", &raz2);
  printf("Ввод второго массива \n");
  for (i = 0; i < raz2; i++) {
    scanf("%d", &b1[i]);
  }

  printf("Ввод массива, в котором будут удаляться элементы \n");
  scanf("%d", &q);
  if (q > 2) {
    printf("Такого массива не существует \n");
    scanf("%d", &q);
  }
  if (q == 1) {
    printf("Ввод кол-ва элементов для удаления \n");
    scanf("%d", &ku);
    if (ku > raz1) {
      printf("Вы ввели кол-во превышающее размеру массива \n");
      scanf("%d", &ku);
    }
    for (i = 0; i < ku; i++) {
      printf("Ввод элемента для удаления \n");
      scanf("%d", &a2[i]);
    }

  } else {
    printf("Ввод кол-ва элементов для удаления \n");
    scanf("%d", &ku);
    if (ku > raz2) {
      printf("Вы ввели кол-во превышающее размеру массива \n");
      scanf("%d", &ku);
    }
    for (i = 0; i < ku; i++) {
      printf("Ввод элемента для удаления \n");
      scanf("%d", &b2[i]);
    }
  }
  printf("Ввод массива, в котором будут добавляться элементы \n");
  scanf("%d", &e);
  if (e > 2) {
    printf("Такого массива не существует \n");
    scanf("%d", &e);
  }
  if (e == 1) {
    printf("Ввод кол-ва элементов для добавления \n");
    scanf("%d", &kd);
    printf("Ввод элемента для добавления \n");
    for (i = 0; i < kd; i++) {
      scanf("%d", &a3[i]);
    }
  } else {
    printf("Ввод кол-ва элементов для добавления \n");
    scanf("%d", &kd);
    printf("Ввод элемента для добавления \n");
    for (i = 0; i < kd; i++) {
      scanf("%d", &b3[i]);
    }
  }
  printf("Вывод первого массива \n");
  for (i = 0; i < raz1; i++) {
    for (j = 0; j < ku; j++) {
      if (a1[i] == a2[j]) {
        k = 1;
      }
    }
    if (k != 1) {
      printf("%d\n", a1[i]);
    }
    k = 0;
  }
  if (e == 1) {
    for (i = 0; i < kd; i++) {
      printf("%d\n", a3[i]);
    }
  }
  k = 0;

  printf("Вывод второго массива \n");
  for (i = 0; i < raz2; i++) {
    for (j = 0; j < ku; j++) {
      if (b1[i] == b2[j]) {
        k = 1;
      }
    }
    if (k != 1) {
      printf("%d\n", b1[i]);
    }
    k = 0;
  }
  if (e == 2) {
    for (i = 0; i < kd; i++) {
      printf("%d\n", b3[i]);
    }
  }
}
