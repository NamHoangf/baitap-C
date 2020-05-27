#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	char s[]="Uyen Uyen";
	int i=0;
	int vowels=0;
	int consonants=0;
	while(s[i++] !='\0')
	{
		if(s[i] =='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
		    vowels++;
	    else 
	        consonants++;
	}
	printf("\n chuoi '%s' co chua %d nguyen am va %d phu am",s,vowels,consonants);
	return 0;
}
