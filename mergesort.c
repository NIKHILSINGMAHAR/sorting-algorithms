#include<stdio.h>
void merge(int a[],int mid,int low,int high)
 {
    int i,j,k,b[500];
    i=low;
    j=mid+1;
    k=low;
    while(i<= mid && j<=high)
    {
        if(a[i]<a[j])
        {  
        b[k]=a[i];
        k++;
        i++;
        }

        else
        {
            b[k]=a[j];
            k++;
            j++;
        }
    }
   while(i<=mid)
   {
    b[k]=a[i];
    i++;
    k++;

   }

   while(j<=high)
   {
    b[k]=a[j];
    j++;
    k++;


   }

   for(i=low;i<=high;i++)
   {
    a[i]=b[i];
   }


 }


 void mergesort(int a[],int low,int high)
 {
    int mid;
    if(low<high)
    {
    mid=(low+high)/2;
    mergesort(a,low,mid);
    mergesort(a,mid+1,high);
    merge(a,mid,low,high);
    }

 }

int main()
{
    int a[400];
    int n;
    printf("enter the size of array");
    scanf("%d",&n);
    printf("\nenter the array elements");
    for(int i=0;i<n;i++)
    {
        scanf("\n %d",&a[i]);
    }

     mergesort(a,0,n);

    printf("\nafter merge sort");
    for(int i=0;i<n;i++)
    {
        printf("\n%d",a[i]);
    }



}


