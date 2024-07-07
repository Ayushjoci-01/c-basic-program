#include<stdio.h>
int main()
{
    int a[90],b[90],c[90],n,m,o;
    printf("enter the size of an 1 array:\n");
    scanf("%d",&n);
    printf("enter the element:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the size of an 2 array\n");
    scanf("%d",&m);
    printf("enter the 2 element\n");
    for(int j=0;j<m;j++)
    {
        scanf("%d",&b[j]);
    }
    o=m+n;
    int i=0,j=0,k=0;
    while(i<n && j<m)
    {
        if(a[i]<b[j])
        {
            c[k++]=a[i++];
        }
        else{
            c[k++]=b[j++];
        }
    }
    while(i<n)
    {
        c[k++]=a[i++];

    }
    while(j<m)
    {
        c[k++]=b[j++];
    }
    printf("merge element is \n");
    for(k=0;k<o;k++)
    {
        printf("%d\n",c[k]);
    }
}