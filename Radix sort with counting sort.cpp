/* Radix Sort with counting sort*/
// Any repeated number eg. 1 1 0 0... can be sorted in ascending or descending order
// This algorithm works even if the numbers have larger difference between them
// Worst time and space complexity is O(n+k), where k is the number of buckets used in counting sort


#include <bits/stdc++.h>
using namespace std;

void count_sort(int a[], int n, int pos){
    int count[10]={};
    int b[10];
    for(int i=0; i<n; i++){
        ++count[(a[i]/pos)%10];
    }
    for(int j=1; j<10; j++){
        count[j]=count[j]+count[j-1];
    }
    for(int k=n-1; k>=0; k--){
        b[--count[(a[k]/pos)%10]]=a[k];
    }
    for(int l=0; l<n; l++){
        a[l]=b[l];
    }
    return;
}

int get_max(int a[], int n){
    int num = *max_element(a, a+n);
    return num;
}

void radix_sort(int a[], int n){
    int max = get_max(a,n);
    for(int pos=1; (max/pos)>0; pos=pos*10){
        count_sort(a,n,pos);
    }
    return;
}

int main()
{
    cout<<"Hello World"<<endl;
    int a[]={432,8,530,90,88,231,11,45,677,199};
    int n=sizeof(a)/sizeof(a[0]);
    radix_sort(a,n);

    cout<<"The sorted array is:"<<endl;
    for(int x=0; x<n;x++){
        cout<<a[x]<<" ";
    }

    return 0;
}
