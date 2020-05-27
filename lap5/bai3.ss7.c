#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a;
	int b;
	int c;
	printf("\n nhap so a ");
	scanf("%d",&a);
	printf("\n nhap so b ");
	scanf("%d",&b);
    c=a-b;
    printf("\n c : %d",c);
    if (c==a && c==b)
    {
    	printf("\n hieu bang gia tri");
	}
	else 
	{
		printf("\n hieu k bang gia tri");
	}
	return 0;
}
