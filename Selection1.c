#include<stdio.h>
int main()
{

    int No = 0;
    int Ans = 0 ;

    printf("Enter Number : \n");
    scanf("%d",&No);

    Ans  = No % 2 ; // % provide remainder after division of No by 2
    if(Ans == 0) // Jar tar , asel tar
    {
        printf("Number is even .. \n");
    }
    else  // Nasel tar
    {
        printf("Number is odd .. \n");
    }

    return 0 ; 
}