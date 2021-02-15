/*Merge sort Algorithm*/
// Worst time complexity: O(n logn)
// Best time complexity: O(n logn)
/* This Algorithm is based on "Divide and conquer" method, where each element of the array is first divided
   into individual elements and then it is recursively sorted*/



#include <bits/stdc++.h>
using namespace std;

void merge(int a[], int lb, int mid, int ub){
    int i=0, j=0, k=lb;
    int n1=mid-lb+1, n2=ub-mid;
    int L[n1], R[n2];
    for(int x=0; x<n1; x++){
        L[x]=a[lb+x];
    }
    for(int y=0; y<n2; y++){
        R[y]=a[mid+1+y];
    }
    while(i<n1 && j<n2){
        if(L[i]<=R[j]){
            a[k]=L[i];
            k++;
            i++;
        }
        else{
            a[k]=R[j];
            k++;
            j++;
        }
    }
    while(i<n1){
        a[k]=L[i];
        i++;
        k++;
    }
    while(j<n2){
        a[k]=R[j];
        j++;
        k++;
    }

    return;
}

void mergesort(int a[], int lb, int ub){
    if(lb<ub){
        int mid=(lb+ub)/2;
        mergesort(a,lb,mid);
        mergesort(a,mid+1,ub);
        cout<<"merge"<<endl;
        merge(a,lb,mid,ub);
    }
    return;
}

int main()
{
    cout<<"Hello World"<<endl;

    int a[]={15,5,24,8,1,3,16,10,20,31,0};
    //int a[]={4,3,2,1,0};
    int lb=0, ub=(sizeof(a)/sizeof(a[0]));
    mergesort(a,lb,ub-1);

    for(int y=0; y<ub; y++){
        cout<<a[y]<<" ";
    }
    return 0;
}
