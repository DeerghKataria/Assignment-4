/*C program to print all natural numbers from 1 to n.*/
#include <stdio.h>

int printnum(int n);

int main()
{
    int n;
    
    //Enter the value of 'n'.
    printf("Enter the value of 'n'....");
    scanf("%d",&n);
    printf("All natural numbers from 1 to %d are: ",n);
    printnum(n);
    return 0;
}

int printnum(int n)
{   
    int i;
    for(i=1;i<=n;i++)
    {
        printf("%d\t",i);
    }
}
