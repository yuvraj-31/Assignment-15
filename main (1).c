

#include <stdio.h>
int greatest(int b[],int n);
int main()
{
    int n;
    printf("Enter the size of an array:\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the %d array elements:\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
   printf("The greatest number in the array is %d", greatest(a,n));

    return 0;
}

int greatest(int b[],int n)
{   
    int temp1=b[0];
    for(int i=0;i<n;i++)
    {
        if(b[i]>temp1)
          temp1=b[i];
    }
    return temp1;
}
