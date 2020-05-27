#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

  void main()
{
	int num1,num2;
	printf("\n nhap num1");
	scnaf("%d",&num1);
	printf("\n nhap num2");
	scanf("%d",&num2);
	clrscr();
	if (num1>num2)
	{
		printf("\n so lon hon la :%d",num1);
	}
	else
	{
		printf("\n so lon hon la :%d",num2);
	}
}
