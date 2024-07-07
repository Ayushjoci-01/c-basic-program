#include<stdio.h>
int main()
{
    int a[90],n,j;
    printf("enter the size");
    scanf("%d",&n);
    printf("enter the element");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("rev element is");
    for(int i=0,j=n-1;i<j;i++,j--)
    {
        int temp;
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        
    }
    for(int i=0;i<n;i++)
    {
        
    printf("rev element is %d\n",a[i]);
    }
}