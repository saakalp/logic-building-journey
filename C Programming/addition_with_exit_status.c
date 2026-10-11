#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////
//
// Function Name :  Addition
// Input:        :  Integer,Integer
// Output:       :  Integer
// Description:  :  performs addition
// Date:         :  11/10/2026
// Author:       :  Sankalp Baban Devkar
//
///////////////////////////////////////////////////////////////

int Addition(
               int iNo1,  // first Input
               int iNo2   // Second Input
            )
{
   int iAns = 0;
   iAns = iNo1+iNo2; // business logic
   return iAns;
}
//////////////////////////////////////////////////////////////
//
//  Entry point of the application
//
//////////////////////////////////////////////////////////////

int main()
{
   int iValue1=0 , iValue2=0 , iResult=0;
 
   printf("Enter fisrt number:\n");
   scanf("%d",&iValue1);
   printf("Enter second number:\n");
   scanf("%d",&iValue2);
   iResult = Addition(iValue1, iValue2);

   printf("Addition is :%d\n",iResult);

    return EXIT_SUCCESS;
}
//////////////////////////////////////////////////////////////
// step 5 : test the program
//
//  tested test cases
//--------------------------------------------------------
//  Input1   Input2      output
//-------------------------------------------------------
//   10       11          21
//   11       0           11
//   0        11          11
//   20       -9          11
//   -9       20          11
//  -20      -11          -31  
//--------------------------------------------------------
//////////////////////////////////////////////////////////////