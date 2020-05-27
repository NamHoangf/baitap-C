#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	char op;
	int x,y;
	
	printf("\n nhap so x: ");
	scanf("%d",&x);
	printf("\n nhap so y: ");
	scnaf("%d",&y);
	op= '>';
	clrscr();
	switch(op)
	{
	case'>':
		x>2000 && y>100;
		printf("\n gia tri x");
		printf("\n gia tri y");
		break;
	case'<':
	    x>3000 && y<500;
		printf("\n gia tri cua x");
		printf("\n gia tri cua y");
		break;
	default :
	    printf("\n k hop le");
		break;		
	}
}
