#include<stdio.h>

int square(int); 
 main()
{
     int number, answer;
    
     printf("Enter your number:");
     scanf("%d", &number);
    
     answer = square(number);  
    
     printf("Square of %d is %d.", number, answer);
}

int square(int n)
{

     return(n*n); 
}

