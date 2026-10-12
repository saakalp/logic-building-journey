#include<stdio.h>
#include<stdlib.h>
int main()
{
   int ret = 0;
   int no = 0;

   printf("Enter number :\n");
   if (scanf("%d,&no") !=1)
   {
     fprintf(stderr,"Invalid Input");

     return EXIT_FAILURE;
   }

   printf("Input is Valid\n");

    return EXIT_SUCCESS;
}