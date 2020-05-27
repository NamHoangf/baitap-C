#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	char s[]="TRanHoangNam";
	int i=0;
	int vowels=0;
	while(s[i++] !='\0')
	{
		if(s[i] =='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
		    vowels++;
	}
	printf("\n chuoi '%s' co chua %d nguyen am",s,vowels);
	return 0;
}
