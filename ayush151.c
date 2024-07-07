#include<stdio.h>
void findunion(int arr1[],int arr2[],int n,int m);
int main()
{
    int arr1[90],arr2[90],n,m;
    printf("enter the size of an 1 array");
    scanf("%d",&n);
    printf("enter the element");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("enter the size of 2 array");
    scanf("%d",&m);
    printf("enter the elements");
    for(int j=0;j<m;j++)
    {
        scanf("%d",&arr2[j]);
    }
    printf("union of the number is ");
    findunion(arr1,arr2,n,m);
    return 0;
}
void findunion(int arr1[90],int arr2[89],int n,int m)
{
    int i=0,j=0;
    while(i<n && j<m)
    {
        if(arr1[i]<arr2[j])
        {
            printf("%d",arr1[i++]);
        }
        else if(arr2[j]<arr1[i])
        {
            printf("%d",arr2[j++]);
        }
        else{
            printf("%d",arr2[j++]);
            i++;
        }
    }
    while(i<n)
    {
        printf("%d",arr1[i++]);
    }
    while(j<m)
    {
        printf("%d",arr2[j++]);
    }
}