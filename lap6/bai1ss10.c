#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
    int cnt=0,a;
    char name;
	clrscr();
	
	do
	{
		printf("\n name : ");
		printf("\n nhap so tuoi :");
		scanf("%d",&a);
		printf("\n No. %d",a);
		cnt++;
		
	 } 
	 while( a !=0);
	 printf("\n so lan da nhap %d",--cnt);
}
