

#include <stdio.h>
int display_rev(int b[],int n);

int main()
{
    int n;
    printf("Enter the size of an array\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the %d number of array elemnts\n",n);
    display_rev(a,n);

    return 0;
}

int display_rev(int b[],int n)
{
    for(int i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(int i=0;i<n/2;i++)
    {
       int temp=b[i];
       b[i]=b[n-i-1];
       b[n-i-1]=temp;
    }
    printf("Array elements after reversing the order:\n");
     for(int i=0;i<n;i++)
    {
        printf(" %d",b[i]);
    }
}
