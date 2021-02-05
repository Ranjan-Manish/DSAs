/*Max Heap insertion*/
// Maximum time complexity in insertion: O(log n)


#include <bits/stdc++.h>
using namespace std;

void insert_heap(vector <int> a, int n, int x){
    n=n+1;
    a.resize(n);
    a[n-1]=x;
    int i=n-1, parent;
    while(i>0){
        parent = floor((i+1)/2)-1;
        if(a[parent]<a[i]){
            swap(a[parent],a[i]);
            i=parent;
        }
        else break;
    }
    cout<<"The array is:"<<endl;

    for(int j=0; j<n; j++){
        cout<<a[j]<<" ";
    }
    return;
}

int main()
{
    cout<<"Hello World"<<endl;
    vector <int> a={70,50,40,45,35,39,16,10,9};
    int n= a.size(),x;
    cout<<n<<endl;
    cout<<"Enter the number for insertion:"<<endl;
    cin>>x;
    insert_heap(a,n,x);

    return 0;
}
