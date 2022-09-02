

#include <stdio.h>
int left_rotation(int b[],int n,int pos);
int right_rotation(int b[],int n,int pos);
int main()
{
    int n,pos;
    char direction;
    printf("Enter the direction\n");
    scanf("%c",&direction);
    printf("Enter the size of an array:\n");
    scanf("%d",&n);

    printf("Enter the position\n");
    scanf("%d",&pos);
     int a[n];
    printf("Enter the %d array elements:\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    if(direction=='l' || direction=='L')
       left_rotation(a,n,pos);
     if(direction=='r' || direction=='R')
       right_rotation(a,n,pos);
       
    return 0;
}

int left_rotation(int b[],int n,int pos)
{
    int temp;
    for(int i=1;i<=pos;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j==0)
            {
                temp=b[0];
            }
            else if(j>=1 && j<=n-1)
            {
                b[j-1]=b[j];
            }
            if(j==(n-1))
              b[j]=temp;
              
        }
    }
    printf("The resulting array after left rotation %d times is:\n",pos);
    for(int j=0;j<n;j++)
    {
        printf(" %d",b[j]);
    }
}
int right_rotation(int b[],int n,int pos)
{
    int temp;
    for(int i=1;i<=pos;i++)
    {
        for(int j=n-1;j>=0;j--)
        {
            if(j==(n-1))
              temp=b[n-1];
            
            if(j>=0 && j<=n-2)
            {
                b[j+1]=b[j];
            }
            if(j==0)
              b[0]=temp;
              
        }
    }
     printf("The resulting array after right rotation %d times is:\n",pos);
    for(int j=0;j<n;j++)
    {
        printf(" %d",b[j]);
    }
}