#include<stdio.h>
int main()
{
    int a[90],n,key;
    printf("enter the size");
    scanf("%d",&n);
    printf("enter the element\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the key\n");
    scanf("%d",&key);
    for(int start=key,end=n-1;start<=end;start++,end--)
    {
        int temp;
        temp=a[start];
        a[start]=a[end];
        a[end]=temp;
    }
    for(int i=0;i<n;i++)
    {
        printf(" %d\n",a[i]);
    }
    return 0;
}