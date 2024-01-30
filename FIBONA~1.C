#include <stdio.h>


int fibonacci(int num)
{
 if (num == 0)
 {
 return 0;
 }

 else if (num == 1)
 {
return 1;
 }
  else
    {
  return fibonacci(num - 1) + fibonacci(num - 2);
    }
}

int main()
{
 int num,i;
 clrscr();
 printf("Enter the number of elements to be in the series : ");
 scanf("%d", &num);

 for (i = 0; i < num; i++)
    {
       if(i == num-1){
	printf("%d ", fibonacci(i));
       }      else{
	printf("%d, ", fibonacci(i));
	}
  }
    getch();
    return 0;
}

