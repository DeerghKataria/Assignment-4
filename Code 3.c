/*C program to find sum of natural numbers from 1 to n using recursion*/

#include <stdio.h>

//Function declaration 
int sumofNaturalNumbers(int start, int end);

int main()
{
    int start,end,sum;

    // Taking input of the range from the user.
    printf("Enter lower limit....");
    scanf("%d",&start);
    printf("Enter upper limit....");
    scanf("%d",&end);
    
    sum=sumofNaturalNumbers(start, end);
    printf("Sum of natural numbers from %d to %d is....%d",start,end,sum);
    return 0;
}

/*Recursive function to find the sum of natural number*/
int sumofNaturalNumbers(int start, int end)
{
    if(start==end)
        return start;
    else
        return start+sumofNaturalNumbers(start + 1, end); 
}
