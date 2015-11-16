#include <cstdio>
#include <iostream>

using namespace std;


void countingSort(int a[],int b[],int n,int k)
{
    int c[k+1];
    int i,j;
    for(i = 0; i<=k; i++)
        c[i] = 0;


    for(j = 0; j<n; j++)


        c[a[j]] = c[a[j]]+1;




    for( i = 1; i<=k; i++)
        c[i] = c[i] + c[i-1];
    for( j = n-1; j>=0; j--) {
        b[c[a[j]]]  = a[j];
        c[a[j]] = c[a[j]] - 1;

    }


}


int main()
{
    int arr[] = {2,5,3,0,2,3,0,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int result[n];

    printf("Before Sorting: \n");
    int i;
    for(i=0 ; i<n; i++) {
        printf(" %d",arr[i]);
    }
    printf("\n");



    int k = 0;
    for(i=0 ; i<n ; i++) {
        if(arr[i]>k) {
            k=arr[i];
        }
    }
    countingSort(arr,result,n,k);
    printf("After Sorting: \n");
    for(i=1 ; i<=n; i++) {
        printf(" %d",result[i]);
    }


    return 0;
}



