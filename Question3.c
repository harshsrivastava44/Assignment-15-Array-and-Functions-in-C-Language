//3. Write a function to sort an array of any size. (TSRS)

#include<stdio.h>
void Sortarray(int b[],int);
int main()
{
    int arr[10];
     Sortarray(arr,10);
    return 0;

}
void Sortarray(int b[],int n)
{
    int i,j,temp=0;
    printf("Enter 10 numbers :\n");
    for ( i = 0; i <n; i++)
    scanf("%d",&b[i]);
    for ( i = 0; i<n-1; i++)
    {
        for ( j = i+1; j < n; j++)
        {
            if(b[i]>b[j])
            {
            temp=b[i];
            b[i]=b[j];
            b[j]=temp;
            }
        }

    }
    for ( i = 0; i<n;i++)
    printf("%d ",b[i]);


}
