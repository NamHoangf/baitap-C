#include <stdio.h>
#include <stdlib.h>
int area (float x)
{
	float area;
    area=3.14*x*x;
    return area;
}
int perimeter(float y)
{
	float perimeter;
	perimeter = y*2*3.14;
	return perimeter;
}
int main()
{
	float r, *pr;
	float a,b;
	printf("\n nhap gia tri :");
	scanf("%f",&r);
	pr=&r;
	a=area(r);
	printf ("\n dien tich hinh tron: %2f",a);
	b=perimeter(r);
	printf("\n chu vi duonwg tron: %2f",b);
	return (r);
}


