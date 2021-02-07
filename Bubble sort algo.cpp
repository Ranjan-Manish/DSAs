/* Bubble sort algorithm*/
// Best time complexity: O(n)
// Worst time complexity: O(n^2)
// Used for arranging an array in ascending or descending order by comparing adjacent entities


#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"Hello World"<<endl;
    int flg=0,n,a[n];
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    for(int i=0; i<n; i++){
        cout<<"Enter the data"<<endl;
        cin>>a[i];
    }

    for(int j=0; j<n-1; j++){
        for(int k=0; k<n-1-j; k++){
            if(a[k]>a[k+1]){
                int temp = a[k];
                a[k]=a[k+1];
                a[k+1]=temp;
                flg=1;
            }
        }
        if(flg==0){
            break;
        }
    }
    cout<<"The sorted array is: "<<endl;
    for(int x=0; x<n;x++){
        cout<<a[x]<<" ";
    }

    return 0;
}
