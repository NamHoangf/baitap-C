#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int a[50];
	int i,n;
	printf("\n nhap cac phan tu trong mang :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n mang vua nhap : ");
	int arr[n];
	for(i=0;i<n;i++)
	{
		printf("\n gia tri %d",i+1);
	    scanf("%d",&arr[i]);
	}
	printf("\n gia tri trung binh :",avg(arr,n));
	return 0;
}
