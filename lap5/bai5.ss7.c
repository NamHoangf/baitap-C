#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int a;
	printf("\n diem can xep loai");
	scanf("%d",&a);
	if(a>=75 && a<100)
	{
		printf("\n loai A");
	}
	else if(a>=60 && a<75)
	{
		printf("\n loai B");
	}
	else if(a>=45 && a<60)
	{
		printf("\n loai C");
	}
	else if(a>=35 && a<45)
	{
		printf("\n laoi D");
	}
	return 0;
}
