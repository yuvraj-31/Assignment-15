

#include <stdio.h>
int unique(int b[],int n);

int main()
{
    int n;
    printf("Enter the size of an array\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the %d number of array elemnts\n",n);
    unique(a,n);

    return 0;
}

int unique(int b[],int n)
{   
    
    for(int i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(b[i]==b[j])
               b[j]=-1;
        }
    }
    printf("All unique elememts in an array:\n");
    for(int i=0;i<n;i++)
    {
        if(b[i]!=-1)
          printf(" %d",b[i]);
    }
    
   
}
