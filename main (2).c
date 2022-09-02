

#include <stdio.h>
int smallest(int b[],int n);
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
   printf("The smallest number in the array is %d", smallest(a,n));

    return 0;
}

int smallest(int b[],int n)
{   
    int temp1=b[0];
    for(int i=0;i<n;i++)
    {
        if(b[i]<temp1)
          temp1=b[i];
    }
    return temp1;
}
