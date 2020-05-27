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
	if(a%b ==0)
	{
		printf("\n a chia het cho b");
	}
	
	else 
	{
		printf("\n a k chia het cho b");
	}
	
	return 0;
}
