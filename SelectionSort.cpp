#include <iostream>
#include <cstdio>
using namespace std;


void selection_sort(int data[],int size)
{

    int i,j , minIndex;
    for(i = 0; i<size; i++) {

        minIndex = i;
        for(j = i+1; j<size; j++)
            if(data[j]<data[minIndex])
                minIndex = j;
        swap(data[minIndex],data[i]);


    }


}


int main()
{




    int a[] = {4, 65, 2, -31, 0, 99, 2, 83, 782, 1};
    int n = sizeof a / sizeof a[0];
    int i;
    for (i = 0; i < n; i++)
        printf("%d%s", a[i], i == n - 1 ? "\n" : " ");
    selection_sort(a, n);
    for (i = 0; i < n; i++)
        printf("%d%s", a[i], i == n - 1 ? "\n" : " ");

    return 0;
}
