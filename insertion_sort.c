//Insertion sort
#include <stdio.h>

void insertion_sort(int *arr,int n)
{
    int i,j,temp;
    for(i=1;i<n;i++)
    {
        temp = arr[i];
        j=i-1;
        while(j>=0 && arr[j]>temp)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
}

int main()
{
    int arr[] = {8,5,4,12,15,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertion_sort(arr,n);
    printf("Array after sorting:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",*(arr+i));
    }
    printf("\n");
    return 0;
}
