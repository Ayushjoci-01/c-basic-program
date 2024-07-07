#include<stdio.h>
int main()
{
    int a[90],n;
    printf("enter the size\n");
    scanf("%d",&n);
    printf("enter the elements");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        int start;
        int end;
        for(start=0,end=n-1;start<end;start++,end--)
        {
            int temp=a[start];  
            a[start]=a[end];
            a[end]=temp;
        }
        printf("reverse element is \n");
        for(i=0;i<n;i++)
        {
            printf("%d\n",a[i]);
        }
    }
}