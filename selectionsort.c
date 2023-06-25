#include<stdio.h>
void display(int* A,int n)
{
    for(int i=0;i<n;i++)
    {
        printf(" %d ",  A[i]);
    }
    printf("\n");

}

void selection(int* A,int n)
{
    int min;
    int i,j;
    int temp;
    for( i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(A[j]<A[min])
            {
            min=j;
            }
            
        }
        temp=A[i];
        A[i]=A[min];
        A[min]=temp;

        
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
selection(a,n);
display(a,n);


}