/*4. Write a function to rotate an array by n position in d direction. The d is an indicative
value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and
d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )*/
#include<stdio.h>
void RotateArray(int b[],int n);
int main()
{
    int a[5]={32,29,40,12,70};
    RotateArray(a,5);
    return 0;
}
void RotateArray(int b[],int n)
{
    int i,d,j,temp=0;
    printf("Enter d numbers :\n");
       scanf("%d",&d);

    for ( i = 0; i < d; i++)
    {
        temp=b[0];
        for ( j = 0; j<n-1; j++)
        {
          b[j]=b[j+1];
        }
          b[n-1]=temp;
    }

    for( i = 0;i < n;i++)
    {
        printf("%d ",b[i]);
    }
}
