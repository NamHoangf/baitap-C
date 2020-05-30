#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

 main() {
 	char ten[5][20], chucdanh[5];
 	int i=0;
 	printf("\n nhap 5 ten vs chuc danh:");
 	for(i;i<=4;i++)
 	{
 		printf("\n nhap ten :",i+1);
 		scanf("%s",&ten[i]);
	 }
	 printf("\n chuc danh :");
	 scanf("%s",&chucdanh);
	 for (i=0;i<=4;i++)
	 {
	 	strcat(chucdanh,ten[i]);
	 	printf("\n %s",chucdanh);
	 }
	
}
