#include<stdio.h>
struct cust_st
{
 int acc_no;
 char cust_nm[30];
 float bal;
};
struct tran_st
{
 int acc_no;
 char trantype;
 float amt;
};
int main()
{
 int choice=1;
 while(choice!=4)
 {
 printf(“\nSelect choice from menu\n\n 1. Accept customer
details\n 2.Record Withdrawal/Deposit transaction\n 3. Print Low
Balance Report\n 4. Exit\n\n Enter choice: “);
 scanf(“ %d”, &choice);
 if(choice==1)
 addcust();
 else if(choice==2)
 rectran();
 else if(choice==3)
 prnlowbal();
 }
 return 0;
}
addcust()
{
 FILE *fp;
 char flag=’y’;
 struct cust_st custdata;
 if((fp=fopen(“customer”, “a+”))==NULL)
 {
 printf(“\nERROR opening customer file”);
 return;
 }
 while(flag==’y’)
 {
 printf(“\n\nEnter Account number: “);
 scanf(“ %d”, &custdata.acc_no);
 printf(“\nEnter Customer Name: “);
 scanf(“%s”, custdata.cust_nm);
 printf(“\nEnter Account Balance: “);
 scanf(“ %f”, &custdata.bal);
 fwrite(&custdata, sizeof(struct cust_st), 1, fp);
 printf(“\n\nAdd another? (y/n): “);
 scanf(“ %c”, &flag);
 }
 fclose(fp);
}
rectran()
{
 FILE *fp1, *fp2;
 char flag=’y’, found, val_flag;
 struct cust_st custdata;
 struct tran_st trandata;
 int size=sizeof(struct cust_st);
 if((fp1=fopen(“customer”, “r+w”))==NULL)
 {
 printf(“\nERROR opening customer file”);
 return;
 }
 if((fp2=fopen(“trans”, “a+”))==NULL)
 {
 printf(“\nERROR opening transaction file”);
 return;
 }

 while(flag==’y’)
 {
 printf(“\n\nEnter Account number: “);
 scanf(“%d”, &trandata.acc_no);
 int accno = trandata.acc_no;
 rewind(fp1);
 while((fread(&custdata, sizeof(struct cust_st), 1, fp1))==1)
 {
 if(custdata.acc_no == accno)
 {
 found = ‘y’;
 break;
 //printf(“\n%d\t%s\t%.2f”, custdata.acc_no, custdata.cust_
nm, custdata.bal);
 }
 }
 //found=’n’;
 val_flag=’n’;

 if(found==’y’)
 {
 while(val_flag==’n’)
 {
 printf(“\nEnter Transaction type (D/W): “);
 scanf(“ %c”, &trandata.trantype);
 if(trandata.trantype!=’D’ && trandata.trantype!=’d’ &&
trandata.trantype!=’W’ && trandata.trantype!=’w’)
 printf(“\t\tInvalid transaction type, please
reenter”);
 else
 val_flag=’y’;
 }
 val_flag=’n’;
 while(val_flag==’n’)
 {
 printf(“\nEnter amount: “);
 scanf(“ %f”, &trandata.amt);
 if(trandata.trantype==’W’ ||trandata.trantype==’w’)
 {
 if(trandata.amt>custdata.bal)
 printf(“\nAccount balance is %.2f. Please
reenter withdrawal amount.”,custdata.bal);
 else
 {
 custdata.bal-=trandata.amt;
 val_flag=’y’;
 }
 }
 else
 {
 custdata.bal+=trandata.amt;
 val_flag=’y’;
 }
 }
 fwrite(&trandata, sizeof(struct tran_st), 1, fp2);
 fseek(fp1, (long)(-size), 1);
 fwrite(&custdata, size, 1, fp1);
 }
 else
 printf(“\nThis account number does not exist”);
 printf(“\nRecord another transaction? (y/n): “);
 scanf(“ %c”, &flag);
 }
 fclose(fp1);
 fclose(fp2);
}
prnlowbal()
{
 FILE *fp;
 struct cust_st custdata;
 char flag=’n’;
 if((fp=fopen(“customer”, “r”))==NULL)
 {
 printf(“\nERROR opening customer file”);
 return;
 }
 printf(“\nReport on account balances below 250\n\n”);
 while((fread(&custdata, sizeof(struct cust_st), 1, fp))==1)
 {
 if(custdata.bal<250)
 {
 flag=’y’;
 printf(“\n%d\t%s\t%.2f”, custdata.acc_no, custdata.cust_nm,
custdata.bal);
 }
 }
 if(flag==’n’)
 printf(“\nNo account balances found below 250”);
 fclose(fp);
}
