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
int main()
{
   int iValue1 , iValue2 , iResult;
 
   printf("Enter fisrt number:\n");
   scanf("%d",&iValue1);
   printf("Enter second number:\n");
   scanf("%d",&iValue2);
   iResult = iValue1+ iValue2; // business logic

   printf("%d\n",iResult);

    return 0;
}