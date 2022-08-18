//10. Write a function in C to count the frequency of each element of an array.
#include<stdio.h>
int main()
{
    int arr[10],i,freq[1000]={0};
    printf("Enter 10 numbers\n");
    for ( i = 0; i < 10; i++)
    scanf("%d",&arr[i]);
    for ( i = 0; i < 10; i++)
    {
       freq[arr[i]]++;

    }
    for ( i = 0; i <1000; i++)
    {   if(freq[i]!=0)
       printf("%d ==>%d\n",i,freq[i]);
    }
    return 0;

}