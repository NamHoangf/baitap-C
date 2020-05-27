#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int a,n;
	int Result=1;
	printf("\n nhap gia tri cua a");
	scanf("%d",&a);	
	
	for(n=1;n<=a;n++)
    Result *= n;
    printf("\n giai thua cua a: %d",a);
    
}

