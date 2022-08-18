/*5. Write a function to find the first occurrence of adjacent duplicate values in the array.
Function has to return the value of the element.*/
#include<stdio.h>
int Adjacentnum(int b[],int n);
int main()
{
    int a[10];
  printf("The first adjacent duplicate value is %d ",Adjacentnum(a,10));
    return 0;
}
int Adjacentnum(int b[],int n)
{
    int i,temp=0,j,count=0;
    printf("Enter %d numbers :\n",n);
    for ( i = 0; i <n; i++)
    {
       scanf("%d",&b[i]);
    }
    for ( i = 0; i < n; i++)
    {
           if (b[i]==b[i+1])
                return b[i];

    }
    return 0;
}
