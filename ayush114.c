//inserion sort//
#include<stdio.h>
int main()
{
    int a[90],n;
    printf("enter the size\n");
    scanf("%d",&n);
    printf("enter the element\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=1;i<n;i++)
    {
        int temp=a[i];
        int j=i-1;
        for(;j>=0;j--)
        {
            if(a[j]>temp)
            {
                a[j+1]=a[j];

            }
            else{
                break;

            }
        }
        a[j+1]=temp;
    }
    printf("sorted array is \n");
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}