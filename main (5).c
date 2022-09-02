

#include <stdio.h>
int first_occur(int b[],int n);
int main()
{
    int n;
    printf("Enter the size of an array:\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the %d array elements:\n",n);
     for(int i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    
    printf("The first occurence of the duplicate element is %d",first_occur(a,n));
    
    return 0;
}
int first_occur(int b[],int n)
{   
   
    for(int i=0;i<n-2;i++)
    {
        if(b[i]==b[i+1])
        {
          return b[i];
        }
    }
}
   