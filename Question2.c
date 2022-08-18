//2. Write a function to find the smallest number from the given array of any size. (TSRS)
#include<stdio.h>
int Smallestnum(int b[],int n)
{
    int i,temp=0,min;
    printf("Enter 10 numbers : \n");
    for ( i = 0; i < n; i++)
    {
       scanf("%d",&b[i]);

    }

min=b[0];
    for ( i = 1; i < n; i++)
    {
        if (min>b[i])
        {
            temp=min;
            min=b[i];
            b[i]=temp;
        }

    }
    return min;

}

int main()
{
int a[10],i;
   printf("The smallest number is %d",Smallestnum(a,10));
   return 0;
}
