#include<stdio.h>
int eventotal(int a[],int n);
int main()
{
    int a[90],n;
    printf("enter the size");
    scanf("%d",&n);
    printf("enter the number");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int index=eventotal(a,n);
    printf("sum of the even number is %d",index);
    return 0;
}
int eventotal(int a[90],int n)
{
    int totalsum=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)

        {
            totalsum=totalsum+a[i];
        }
    }
    return totalsum;

}