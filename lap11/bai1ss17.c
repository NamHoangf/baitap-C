#include<iostream>
#include<cstring>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
bool is subsequence(char str[],str[], int a, int b);
{
	int(a==0); 
	return true;
	int (b==0);
	return false;
	if(str1[a-1] == str2[b-1])
	    return issubsequence(str1,str2,a-1,b-1);
	return issubsequence(str1,str2,a,b-1);    
}
int main()
{
	char str1[],str2[];
	printf("\n nhap str1 :");
	scanf("%s",&str1);
	printf("\n nhap str2 :");
	scanf("%s",&str2);
	int a = strlen(str1);
	int b = strlen(str2);
	issubsequence(str1,str2,a,b);
	printf("\n yes");
	printf("\n no");
	return 0;
}
