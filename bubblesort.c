#include<stdio.h>
void display(int* A,int n)
{
    for(int i=0;i<n;i++)
    {
        printf(" %d ",  A[i]);
    }
    printf("\n");

}

void bubble(int* A,int n)
{
    int i,j;
    int temp;
    for( i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
         if(A[j]>A[j+1])
         {
        temp=A[j]; 
        A[i]=A[j+1];
        A[j+1]=temp;
         }

        }
    }
}

int main()
{
int n;
printf("enter size");
scanf("%d",&n);
int a[n];
printf("enter array element");
for(int i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
bubble(a,n);
display(a,n);


}