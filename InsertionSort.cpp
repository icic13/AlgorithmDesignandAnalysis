#include <cstdio>
#include <iostream>

using namespace std;
void swap(int* a, int* b)//Function to swap values
{
    int t = *a;
    *a = *b;
    *b = t;
}

void printArray(int arr[], int size)//Function for printing the array
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


int partition(int arr[],int left,int right)//partition's the array
{

    int x = arr[right];//pivot element

    int i  = (left-1);//index of pivot

    for(int j = left; j<=right-1; j++) {
        if(arr[j]<=x) {

            i++;

            swap(&arr[i],&arr[j]);


        }



    }
    swap(&arr[i+1],&arr[right]);
    return (i+1);



}


void quickSort(int arr[],int left,int right)
{

    if(left<right) {
        int p = partition(arr,left,right);

        quickSort(arr,left,p-1);
        quickSort(arr,p+1,right);


    }



}


int main()
{
    int arr[] = {44,33,11,55,77,90,40,60,99,22,88,66};

    int n = sizeof(arr)/sizeof(arr[0]);
    printArray(arr, n);

    quickSort(arr, 0, n-1);

    printf("Sorted array: \n");
    printArray(arr, n);

    return 0;
}


