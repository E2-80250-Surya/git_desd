#include<stdio.h>

void swap(int *,int *);

int main(void)
{

   int num1 = 10,num2 = 20;
   printf("Before swapping: num1 = %d,num2 = %d\n",num1,num2);
   swap(&num1, &num2);
   printf("Afer swapping: num1 = %d,num2 = %d\n",num1, num2);

   return 0;

}

void swap(int *pnum1,int *pnum2)
   int temp = *pnum1;
   *pnum1 = *pnum2;
   *pnum2 = temp;
