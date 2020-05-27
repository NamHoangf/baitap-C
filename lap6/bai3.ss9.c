#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


    using namespace std;
	int fibonacci(int n){
		int f0=0;
		int f1=1;
		int f2=1;
		int i;
		if (n<0)
		{
			return -1;
		}
		else if(n==0 || n==1)
		{
			return n;
		}
		else
		{
			for(i=2;i<n;i++)
			{
			fo=f1;
			f1=fn;
			fn=fo + f1;
		    }
		}
		return fn;

	
int main(){

	int i;
	printf("\ 10 so dau tien cua day fibonacci :");
	for (i=0;i<10;i++)
	    printf("\n fibonacci(i)");

}
