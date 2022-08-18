//1. Write a function to find the greatest number from the given array of any size. (TSRS)
#include<stdio.h>
int greatestnum(int b[],int n)
{
    int i,temp=0,max;
    printf("Enter 10 numbers : \n");
    for ( i = 0; i < n; i++)
    {
       scanf("%d",&b[i]);

    }

max=b[0];
    for ( i = 1; i < n; i++)
    {
        if (max<b[i])
        {
            temp=max;
            max=b[i];
            b[i]=temp;
        }

    }
    return max;

}

int main()
{
int a[10],i;
   printf("The greatest number is %d",greatestnum(a,10));
   return 0;
}
