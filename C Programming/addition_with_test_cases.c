/*

step 1 : understand the problem statement
step 2 : write the algoritham
step 3 : decide the programing langauage
step 4 : write the program
step 5 : Test the program
*/

/////////////////////////////////////////////////////////
//
// step 1 : Understand the problem statement user is going to enter any 2 interger and we have to performe addition
//
///////////////////////////////////////////////////////////////
//
// step 2: Write the program
/*

   START
         accept first number as No1
         accept second number as NO2
         create the variable as Ans to store the result
         perform the addition and store into Ans
         Display the result Ans
    STOP
*/
///////////////////////////////////////////
/*
/////////////////////////////////////////////////////////////
  STEP 3: DECIDE THE PROGRAMING LANGAUGE
          we are selected c programing

*/
/////////////////////////////////////////////////

/*
/////////////////////////////////////////////////////
 step 4: write the program
*/
/////////////////////////////////////


#include<stdio.h>
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

int Addition(int iNo1, int iNo2)
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

    return 0;
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