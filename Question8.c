//8. Write a function in C to print all unique elements in an array.
#include<stdio.h>
void Uniquenum(int b[],int n);
int main()
{
    int a[10];
   Uniquenum(a,10);
    return 0;
}
void Uniquenum(int b[],int n)
{
    int i,unique[10],j;
    printf("Enter %d numbers :\n",n);
    for ( i = 0; i <n; i++)
    {
       scanf("%d",&b[i]);
    }
    for ( i = 0; i < n-1; i++)
    {
        for (  j= i+1; j <n; j++)
        {
          if(b[i]!=b[j])
          unique[i]=b[i];

        }

    }
        for(i=0;i<n;i++)
            printf("%d ",unique[i]);
}
