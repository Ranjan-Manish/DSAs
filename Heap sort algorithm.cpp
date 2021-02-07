/* Heapify method to sort an array */
// Here the array is first converted into max heap which is order of O(n)
// Then by deletion operation of max heap, the array is sorted which is of the order O(n logn)


#include <bits/stdc++.h>
using namespace std;

void max_heapify(int a[], int n, int i){
    int l=(2*i)+1, r=(2*i)+2, largest =i;

    if(l<n && a[l]>a[largest]){
        largest = l;
    }
    if(r<n && a[r]>a[largest]){
        largest = r;
    }
    if(i!=largest){
        swap(a[i],a[largest]);
        max_heapify(a,n,largest);
    }
    return;
}

void heap(int a[],int n){
    for(int i=floor(n/2)-1; i>=0; i--){
        max_heapify(a,n,i);
    }
    return;

}

void heap_sort(int a[], int n){
    for(int j=n-1; j>=0; j--){
        swap(a[0],a[j]);
        max_heapify(a,j,0);
    }
    return;
}

int main()
{
    cout<<"Hello World"<<endl;
    int a[]={15,5,20,1,17,10,30};
    int n = sizeof(a)/sizeof(a[0]);
    heap(a,n);                             // Building Max Heap Array
    cout<<"Max Heap of the Array is:"<<endl;
    for(int x=0;x<n;x++){
        cout<<a[x]<<" ";
    }

    heap_sort(a,n);                       // Sorting the max heap
    cout<<endl<<"Sorted array is:"<<endl;
    for(int y=0; y<n; y++){
        cout<<a[y]<<" ";
    }

    return 0;
}
