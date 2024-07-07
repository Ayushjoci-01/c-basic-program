#include<stdio.h>
int main()
{
    int a[90],n;
    printf("enter the elements\n");
    scanf("%d",&n);     
    printf("enter the elements");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp;
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("sorted array is \n");
    for(int i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
} 