#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<malloc.h>

int const soluong=2;
int const dodaichuoi=50;
int main ()
{
char tenconvat[soluong][dodaichuoi];
char *ptr[soluong];

int i;
for(i=0;i<soluong;i++)
{
printf("Nhap vao ten con thu %d: ",i+1);
gets(tenconvat[i]);

char* temp;
temp=(char*)malloc(dodaichuoi*sizeof(char));
strcpy(temp,"s");
strcat(tenconvat[i],temp);

ptr[i]=tenconvat[i];
}
for(i=0;i<soluong;i++)
{
printf("\n%s",*(ptr+i));
}

getch();
return 0;
}
