

#include <stdio.h>
int merge(int c[],int d[],int n);

int main()
{
    int n;
    printf("Enter the size of an array\n");
    scanf("%d",&n);
    int a[n];
    int b[n];
    
    merge(a,b,n);

    return 0;
}

int merge(int c[],int d[],int n)
{   
    int mix[2*n];
    printf("Enter the %d number of array 1 elemnts\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&c[i]);
    }
    printf("Enter the %d number of array 2 elements\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&d[i]);
    }
    for(int i=0;i<2*n;i++)
    {   if(i<n)
         mix[i]=c[i];
        else
         mix[i]=d[i-n];
    }
    for(int i=0;i<2*n;i++)
    {
        for(int j=i;j<2*n;j++)
        {
            if(mix[i]<mix[j])
            {
                int temp=mix[i];
                mix[i]=mix[j];
                mix[j]=temp;
            }
        }
    }
    printf(" sorted the array after merged two array:\n");
    for(int i=0;i<2*n;i++)
    {
        
          printf(" %d",mix[i]);
    }
    
   
}
