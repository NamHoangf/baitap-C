#include <stdio.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main() {
	char city[5][20]; nhietdo[5];
	int i=0;
	printf("\n nhap city vs nhiet do :");
	for(i=0;i<=4;i++)
	{
		printf("\n city :",i+1);
		scanf("%s",&city[i]);
		printf("\n nhietdo :",i+1);
		scanf("%d",&nhietdo[i]);
	}
	
	
