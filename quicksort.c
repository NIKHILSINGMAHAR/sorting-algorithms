#include<stdio.h>
void quicksort(int a[40],int first,int last)
{
    int pivot,i,j,temp;
    if(first<last)  
    {
        pivot=first;
        i=first;
        j=last;
        while(i<j)
        {
            
            while(a[i]<=a[pivot])
    
                i++;    //start++

            while(a[j]>a[pivot])
                j--;   //end--
            
            if(i<j)
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }

        } 
        temp=a[pivot];
        a[pivot]=a[j]; 
        a[j]=temp;
        quicksort(a,0,j-1);//left sub array
        quicksort(a,j+1,last);//right sub array

     }


}



int main()
{
    int a[40],n,i;
    printf("enter the size of array");
    scanf("%d",&n);
    printf("\nenter the element");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    quicksort(a,0,n-1);
    printf("sorted array");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}

