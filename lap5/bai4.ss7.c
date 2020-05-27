#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	char nam;
	int a;
	printf("\n a luong cua nam ");
	scanf("%d",&a);
	if(a>250 && a<300)
	{
		printf("\n luong nam thuoc  nhom A");
	}
	else if (a>100 && a<250)
	{
		printf("\n luong nam thuoc nhom B ");
	}
	else if (a>0 && a<100)
	{
		printf("\n luong nam thuoc nhom khac");
	}
	return 0;
}
