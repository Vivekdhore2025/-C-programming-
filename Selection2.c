#include<stdio.h>

int main()
{
int No = 0 ; 
printf(" Primary School Portal \n");
printf("Enter Division : \n");
scanf("%d",&No);

if(No == 1)
{
    printf("Your exam is at 1 PM\n");
}
else if(No == 2)
{
    printf("Your exam is at 2 PM\n");
}
else if(No == 3)
{
    printf("Your exam is at 3 PM\n");
}
else if(No == 4)
{
    printf("Your exam is at 4 PM\n");
}
else
{
    printf("Invalid Division\n");
}
    return 0 ; 
}