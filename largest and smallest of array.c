#include<stdio.h>
int main()
{
    int a[50],n,i,min,max;
    printf("enter no of elements ");
    scanf ("%d",&n);
    for(i=0;i,n;i++)
    {
        if (a[i]>max)
        {max=a[i];
        }
        if(a[i]<min)
        {min=a[i];
        }
    }
    printf("max value= %d",max);
    printf("min value= %d",min);
    return 0;
}