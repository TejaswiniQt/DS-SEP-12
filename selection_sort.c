//Insertion sort
#include <stdio.h>

void selection_sort(int *arr,int n)
{
    int i,j,temp,min;
    for(i=0;i<n-1;i++)
    {
        min = i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j] < arr[min])
            {
                min = j;
            }
        }
        if(i != min)
        {
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
}

int main()
{
    int arr[] = {8,5,4,12,15,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    selection_sort(arr,n);
    printf("Array after sorting:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",*(arr+i));
    }
    printf("\n");
    return 0;
}
