#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main() {
	int a;
	int menu;
	printf("so menu de order do uong");
	printf(" gia tien cafe 5k \n, nuoc loc 2k \n");
	scanf("%d",&menu);
	switch(menu){
        case1:
        	printf("ok cafe 5k");
            price += 5000;
        break;
        case2:
        	printf("ok nuoc lov 2k");
            price += 2000;	
        break;
    }
    {
    	printf(" order tiep k? \n,(tiep  chon a,khong chon 3: \n)");
    scanf("%d",&a);
	}
    while( a !=3);
    printf(" tra  tien roi next : %d vnd \n",price);
    printf(" next \n");
	return 0;
}
