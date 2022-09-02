

#include <stdio.h>
int count_freq(int b[],int n);

int main()
{
    int n;
    printf("Enter the size of an array\n");
    scanf("%d",&n);
    int a[n];
    count_freq(a,n);
    return 0;
}

int count_freq(int b[],int n)
{   
    printf("Enter the %d number of array  elements\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    int j;
    for(int i=0;i<n;i++)
    {   int counter=1;
        for(int j=i+1;j<n;j++)
        {  
           if(b[i]==b[j] && b[i]!=-1)
           {
               counter++;
               b[j]=-1;
           }
          
           if(j==n-1 && b[i]!=-1)
           {
               printf("%d comes %d times in the array\n",b[i],counter);
           }
        }
        if(i==n-1 && b[i]!=-1)
           printf("%d comes %d times in the array\n",b[i],counter);
    }
    
    
   
}
