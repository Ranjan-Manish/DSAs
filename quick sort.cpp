/*Quicksort Algorithm*/
// Worst Time complexity: O(n^2)
// Best time complexity: O(n logn)
/* Sort any given array by partitioning the array with the help of a pivot, which is normally taken as
   the first element of the array*/


#include <bits/stdc++.h>
using namespace std;

int position(int a[], int lb, int ub){
    int start=lb, end =ub, pivot = a[lb];
    while(start<end){
        while(a[start]<=pivot){
            start++;
        }
        while(a[end]>pivot){
            end--;
        }
        if(start<end){
            swap(a[start],a[end]);
        }
    }
    swap(a[end],a[lb]);
    return end;
}

void quicksort(int a[], int lb, int ub){
    if(lb<ub){
        int loc=position(a,lb,ub);
        quicksort(a,lb,loc-1);
        quicksort(a,loc+1,ub);
        return;
    }
}

int main()
{
    cout<<"Hello World"<<endl;
    int a[]={5,4,3,2,1};
    int lb=0, ub=(sizeof(a)/sizeof(a[0]))-1;
    quicksort(a,lb,ub);

    cout<<"The sorted array is:"<<endl;
    for(int y=0; y<(sizeof(a)/sizeof(a[0])); y++){
        cout<<a[y]<<" ";
    }

    return 0;
}
