#include<stdio.h>
void insertion(int arr[],int n)
{
    int i,j,loc,ele;
    for(i=n-1;i>loc;i--)
        arr[i+1]=arr[i];
        arr[loc]=ele;
}
void display(int arr[],int n)
{
    int i;
    for(i=0;i<=n;i++)
    {
        printf("%d\n",arr[i]);
    }
}
int main()
{
    int n;
    int arr[10];
    int ele,i;
    printf("enter the number of array elements");
    scanf("%d\n",&n);
    printf("enter the elements");
    for(i=0;i<n;i++)
    {
       scanf("%d\n",&arr[i]);
    }
    printf("enter the element to be selected");
    scanf("%d\n",&ele);
}
