//9. Write a function in C to merge two arrays of the same size sorted in descending order.
#include<stdio.h>
int main()
{
    int a[5]={1,2,5,11,12};
    int b[5]={3,4,7,10,9};

    int c[10],i=0,j=0,k;

   for ( k=0;k<10;k++)
    {
          if (i>=5)
        {
           while (k<10)
              {
               c[k]=b[j];
               j++;
               k++;
               if(k==10)
               break;
               }
        }
        else if (j>=5)
        {
           while (k<10)
              {
               c[k]=a[i];
               i++;
               k++;
               if(k==10)
               break;
               }
        }
    else if (a[i]<b[j])
        {
           c[k]=a[i];
           i++;
        }
        else
        {
        c[k]=b[j];
        j++;
        }
    }
    for ( k = 9; k >=0; k--)
    printf("%d ",c[k]);

  return 0;
}
