

#include <stdio.h>
int sort(int b[],int n);
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
    printf("After sorting the array:\n");
    sort(a,n);

    return 0;
}

int sort(int b[],int n)
{   
    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
             if(b[i]>b[j])
           {
             temp=b[i];
             b[i]=b[j];
             b[j]=temp;
             
           }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf(" %d",b[i]);
    }
    
}
