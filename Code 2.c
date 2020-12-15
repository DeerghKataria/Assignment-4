/* C program to print even or odd numbers in given range using recursion*/

#include <stdio.h>

/* Function declaration */
void printEvenOdd(int cur,int limit);

int main()
{
    int lowerLimit, upperLimit;
    
    // Taking input of the range from the user.
    printf("Enter lower limit....");
    scanf("%d",&lowerLimit);
    printf("Enter upper limit....");
    scanf("%d",&upperLimit);
    
    printf("Even/odd Numbers from %d to %d are....", lowerLimit, upperLimit);
    printEvenOdd(lowerLimit,upperLimit); 
    return 0;
}

// Recursive function to print even or odd numbers in a given range.
void printEvenOdd(int cur, int limit)
{
    if(cur>limit)
    {
        return;
    }
    else
    {
        printf("%d, ", cur);
    }
    // Recursively call to printEvenOdd to get next value.
    printEvenOdd(cur+2,limit);
}
