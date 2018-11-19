#include <stdio.h>
#include <stdlib.h>

 int main (int argc, char *argv[]) 
{
 int i=0;
 if(argc<2)
 {
   printf("You didn't specify the arguments\n");
   exit(1);
 }
 for (i=1; i< argc; i++) {
     printf("\narg%d=%s", i, argv[i]);
 }

 printf("\n");
 return 0;
 }
