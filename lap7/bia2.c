#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int a,b ;
	
	 a=1;
    printf("enter no. of row");
    scanf("%d",a);
     for( a=1;a <= 4;a++)
    {
    for ( b=1;b <= a;b++)
        {
            printf("%d", b);
        }
        printf("\n");
    }
	return 0;
}
