
#include<stdio.h> 
#include<string.h>   
    char std;
    int isSubSequence(char str1[], char str2[], int m, int n) 
    { 
    int i,j = 0; 
    for (i=0; i<n&&j<m; i++) 
	    if (str1[j] == str2[i]) 
		    j++; 
    return (j==m); 
    }  
    int main() 
    { 
	    char str1[] = "UyenUyen"; 
	    char str2[] = "Uyen"; 
	    int m = strlen(str1); 
	    int n = strlen(str2); 
	    isSubSequence(str1, str2, m, n);
	    if (m==n)
	        printf("\n yes:");
	    else    
	        printf("\n no:");
	return 0; 
    } 

