#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a;
	int b;
	a=10;
	b=a+a++;
	printf("b=%d",b);
	return 0;
}
