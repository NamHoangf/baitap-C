#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int cardnumber;
	int passcard;
	int sodu= 100000;
	char tieptuc[10];
	int luachon;
	int ruttien;
	printf(" nhap so the: \n");
	printf(" nhap ma the: \n");
	scanf("%d", &cardnumber);
	scanf("%d", &passcard);
	if (cardnumber==1 && passcard==2)
	{
		printf("dang nhap thanh cong: \n");
		do {
			printf("nhap so de lua chon: \n");
			printf("1.Rut tien: \n");
			printf("2.kiem tra so du: \n");
			scanf("%d",&luachon);
			switch(luachon)
			{
				case 1:
					printf(" nhap so tien muon rut: \n");
					scanf("%d",&ruttien);
					if( sodu >= ruttien )
					{
						printf(" rut thanh cong %d: \n, so du la %d: \n",ruttien,sodu);
					}
					else
					{
						printf(" so tien trong tai khoan khong du: \n");
					}
					break;
				case 2:
					printf("so tien du la %d: \n");
					break;
			}
			printf(" tiep tuc(y \n)?: \n");
			scanf("%s",&tieptuc);
		}
		while(tieptuc!='y');
		{
			printf("next: \n");
		}
	}
	
	return 0;
}
