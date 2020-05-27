#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a=12000;
	int DA=(12000/100)*12;
	int HRA=120;
	int TA=150;
	int VV=450;
	int PA=(12000/100)*14;
	int IT= (12000/100)*15;
	int b;
	b= a+DA+HRA+TA+VV-(PA+IT);
	printf("\n luong thuc lanh b=%d",b);
	return 0;
}
