#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int a;
	int b;
	printf("\n nhap so a ");
	scanf("%d",&a);
	printf("\n nhap so b ");
	scanf("%d",&b);
	if(a*b==1000)
	{
		printf("\n tich a va b bang 1k");
	}
	else 
	{
		printf("\n tich a vs b lon hon 1k");
	}
	return 0;
}
