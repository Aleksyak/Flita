#include <stdio.h>
int main()
{
int a[100];
int b[100];
int  i,k,f,h,y,t,u,r,e,w,q;

  printf("Ввод размера первого массива \n");
scanf("%d", &y);
  
printf("Ввод первого массива \n");
  
for (i=0; i<y; i++)
{
   scanf("%d", &a[i]);
}

printf("Ввод размера второго массива \n");
scanf("%d", &u);
  
printf("Ввод второго массива \n");
for (k=0; k<u; k++)
{
   scanf("%d", &b[k]);
}

printf("Ввод массива, в котором будут удаляться элементы");
  scanf("%d", &q);
if(q=="a"){
   printf("Ввод кол-ва элементов для удаления \n");
scanf("%d", &t);
  for (r=0; r<t; r++)
  {
printf("Ввод элемента для удаления \n");
scanf("%d", &f);
a[f-1]=NULL;
    }
}
  else
{
printf("Ввод кол-ва элементов для удаления \n");
scanf("%d", &t);
  for (r=0; r<t; r++)
  {
printf("Ввод элемента для удаления \n");
scanf("%d", &f);
b[f-1]=NULL;
    }
}

  
  printf("Ввод кол-ва элементов для добавления \n");
scanf("%d", &e);
  for (w=0; w<e; w++){
printf("Ввод элемента для удаления \n");
scanf("%d", &a[y-t+w]);
    }
}
scanf("Вывод первого массива \n");
for (i=0; i<y; i++)
{
  printf("%d\n", a[i]);
}

printf("Вывод второго массива \n");
for (k=0; k<u; k++)
{
 printf("%d\n", b[k]);
}
}
