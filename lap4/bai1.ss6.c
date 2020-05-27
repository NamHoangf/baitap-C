#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int s, n=3,m=5,r,t;
	float x=3.0,y;
	t=n/m;
	printf("\n ket qua n/m is: %d",t);
	r=n%m;
	printf("\n ket qua n%m is: %d",r);
	y=n/m;
	printf("\n ket qua n/m is: %d",y);
	t=x*y-m/2;
	printf("\n ket qua x*y-m/2 is: %d",t);
	x=x*2.0;
	printf("\n ket qua x*2.0 is: %d",x);
	s=(m+n)/r;
	printf("\n ket qua (m+n)/r is: %d",s);
	y=--n;
	printf("\n ket qua --n is: %d",y);
	return 0;
}
