

#include <stdio.h>
int duplicate(int b[],int n);

int main()
{
    int n;
    printf("Enter the size of an array\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the %d number of array elemnts\n",n);
    printf("The total number of duplicate elements in the array is %d",duplicate(a,n));

    return 0;
}

int duplicate(int b[],int n)
{   
    int count=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(b[i]==b[j])
               count++;
        }
    }
    return count;
   
}
