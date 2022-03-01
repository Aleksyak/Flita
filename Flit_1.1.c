#include <stdio.h>
int main()
{
int a[100];
int b[100];
int  i,k,f,h;
  
printf("Ввод первого массива \n");
  
for (i=0; i<3; i++)
{
   scanf("%d", &a[i]);
}
  
printf("Ввод второго массива \n");
for (k=0; k<3; k++)
{
   scanf("%d", &b[k]);
}

printf("Ввод номера элемента для удаления \n");
scanf("%d", &f);
a[f]=" ";

printf("Ввод элемента на замену \n");
scanf("%d", &h);
a[f]=h;

printf("Вывод первого массива \n");
for (i=0; i<3; i++)
{
  printf("%d\n", a[i]);
}

printf("Вывод второго массива \n");
for (k=0; k<3; k++)
{
 printf("%d\n", b[k]);
}
}
