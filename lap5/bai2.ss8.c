#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 main() {
	char ki;
	clrscr();
	printf("\n nhap 1 chua cai (A,B,C,D,F,P,V,a,b,c,d,f,p,v)");
	scanf("%c", &ki);
	if(ki< 'a' || ki > 'z')
	printf("\n ki tu k thuoc bang chu cai");
	else 
	switch(ki)
	{
		case 'a' && 'A':
			printf("\n ada");
			break;
		case 'b' && 'B':
		    printf("\n basic");
		    break;
		case 'c' && 'C':
		    prinf("\n COBOL");
		    break;
		case 'd' && 'D':
		    printf("\n dBASE III");
		    break;
		case 'f' && 'F':
		    printf("\n fortan");
		    break;
		case 'p' && 'p':
		    printf("\n pascal");
		    break;
		case 'v' && 'V':
		    printf("\n visual");
		    break;
		default:
		    printf("\n loi game");
			break;    								
	}
	return 0;
}
