#include<stdio.h>
int search(int a[],int n,int key);
int main()
{
    int a[90],n,key;
    printf("enter the size of an array");
    scanf("%d",&n);
    printf("enter the element");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the number you want search");
    scanf("%d",&key);
    int index=search(a,n,key);
    if(key)
    {
        printf("elements found");

    }
    else
    {
        printf("elements not found");
    }
    printf("element index is %d",key);
    return 0;
    
}
int search(int a[],int n,int key)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            return 1;
        }
        else if(a[i]!=key)
        {
            return 0;
        }

    }
}