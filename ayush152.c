#include<stdio.h>
void intersection(int a[90],int b[90],int n,int m);
int main()
{
    int a[90],b[90],n,m;
    printf("enter the size \n");
    scanf("%d",&n);
    printf("enter the elements");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the size of 2 array");
    scanf("%d",&m);
    printf("enter the elements");
    for(int j=0;j<m;j++)
    {
        scanf("%d",&b[j]);
    }
    printf("intersection of the element is ");
    intersection(a,b,n,m);
    return 0;
}
void intersection(int a[90],int b[90],int n,int m)
{
    int i=0,j=0;
    while(i<n && j<m)
    {
        if(a[i]<b[j])
        {
            i++;
        }
        else if(b[j]>a[j])
        {
            printf("%d",b[j++]);
        }
        else{
            printf("%d\n",b[j++]);
            i++;
        }
    }
}