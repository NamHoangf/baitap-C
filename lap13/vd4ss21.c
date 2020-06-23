#include <stdio.h>
main()
{
 FILE *in;
 char buff[81], fname[13];

 printf(“Enter the Source File Name:”);
 gets(fname);
 if((in=fopen(fname, “r”))==NULL)
 {
 fputs(“\nFile not found”, stderr);
 /* display error message on standard error rather than standard output */
 exit(1);
 }
 while(!feof(in))
 {if(fgets(buff, 81, in))
 {
 fputs(buff, stdprn);
 /* Send line to printer */
 }
 }
 fclose(in);
}
