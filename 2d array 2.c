#include<stdio.h>
int main()
{
    int a[50][50],n,i,j,sum=0;
    printf("enter order of matrix");
    scanf("%d,&n");
    for(i=0;i<n,i++;)
    {
        for(j=0;j<n;j++)
        {
            if(i==j||(i+j==n-1))
            {sum+=a[i][j];
            }
        }
    }
    printf("sum of diagonal elements=%d",sum);
    return 0;
}