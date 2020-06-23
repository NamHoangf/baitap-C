#include <stdio.h>
main ()
{
 FILE *fp;
 double d = 23.31 ;
 int i = 13;
 long li = 1234567L;

 if ( ( fp= fopen (“jak”, “wb+”)) == NULL )
 {
 printf(“cannot open file “);
 exit(1);
 }
 fwrite (&d, sizeof(double), 12, fp);
 fwrite (&i, sizeof(int), 1, fp);
 fwrite (&li, sizeof(long), 1,fp);
 fclose (fp);
 if ((fp= fopen (“jak”, “rb+”)) == NULL )
 {
 printf(“cannot open file “);
 exit(1);
 }
 fread (&d, sizeof(double), 1, fp);
 fread(&i, sizeof(int), 1, fp);
 fread (&li, sizeof(long), 1, fp);
 printf (“%f %d %ld”, d, i, li);
 fclose (fp);
}
