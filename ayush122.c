#include<stdio.h>
int main()
{
    int a[90],n;
    printf("enter the size\n");
    scanf("%d",&n);
    printf("enter the elements\n");
    for(int i=1;i<n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                int swap(a[j],a[j+1]);
            }
        }
    }
}