//7. Write a function in C to count a total number of duplicate elements in an array.
#include<stdio.h>
int Duplicatenum(int b[],int n);
int main()
{
    int a[10];
    Duplicatenum(a,10);
    return 0;
}
int Duplicatenum(int b[],int n)
{
    int i,temp=0,j,count=0;
    printf("Enter %d numbers :\n",n);
    for ( i = 0; i <n; i++)
    {
       scanf("%d",&b[i]);
    }
    for ( i = 0; i < n; i++)
    {
        for (  j= i+1; j <n; j++)
        {
            if (b[i]==b[j])
            {
                count++;
            }
        }
    }
    printf("The Total number of duplicate element is : %d",count);
}
