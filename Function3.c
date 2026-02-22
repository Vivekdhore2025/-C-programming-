#include<stdio.h>

int Addition(int No1 ,int No2)  //reusable function  // ha vapravaicha ahe.  // ha function 2 parameters gheto aani int type return karto ahe.
{                               // gloal variable nahi ahe.  // local variable ahe.
    int Sum  = 0;
    Sum = No1 + No2;
    return Sum; 
}

int main()
{
int iValue1 = 10;  // Hardcoded values.
int iValue2 = 11;             
int iAns    =  0;  

iAns = Addition(iValue1,iValue2);  //function call.  // actual parameters.  // arguments.

printf("Addition is  : %d",iAns); 

    return 0;
}

// reuseability function
// it is procedural programming approach program // hatane create karto ahe.