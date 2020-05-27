#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	   char chuoi[100];
            int i, n;
            printf("nhap chuoi : ");
            gets(chuoi);
            n= strlen(chuoi)-1;
            for(i=n; i>=0; i--)
            {
                        printf("%c", chuoi[i]);
            }
            getch();
	return 0;
}
