#include <stdio.h>

void insertionSort(int a[],int length)
{

    int key,i,j;
    for(j = 1; j<length; j++) {
        key = a[j];
        i = j-1;
        while(i>=0&&a[i]>key) {
            a[i+1] = a[i];
            i--;


        }
        a[i+1] = key;

    }

}

int main()
{
    int data[1000],i,num;
    printf("Enter how many numbers are there : \n");
    scanf("%d",&num);
    printf("Enter the numbers: \n");
    for(i = 0; i<num; i++)
        scanf("%d",&data[i]);
    insertionSort(data,num);
    printf("The sorted numbers are : \n");
    for(i = 0; i<num; i++)
        printf("%d ",data[i]);
    printf("\n");

}
