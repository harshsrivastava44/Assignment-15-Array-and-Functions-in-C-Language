//6. Write a function in C to read n number of values in an array and display it in reverse order.
#include<stdio.h>
void FuncReverse(int b[]);
int main()
{   
    int a[10];
    FuncReverse(a);
}
void FuncReverse(int b[])
{

        int i,j,temp=0;
  
    printf("Enter 10 numbers:\n");
    for ( i = 0; i <10; i++)
    {
        scanf("%d",&b[i]);
    }

    for ( i =0; i <9; i++)
    {
        for ( j =i+1; j<10; j++)
        {
            if (b[i]>b[j])
            {
                temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }
        }
    }
     for ( i =9; i >=0; i--)
    printf("%d ",b[i]);
}