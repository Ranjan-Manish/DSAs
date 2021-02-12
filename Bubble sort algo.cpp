/* Bubble sort algorithm*/
// Best time complexity: O(n)
// Worst time complexity: O(n^2)
// Used for arranging an array in ascending or descending order by comparing adjacent entities


#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"Hello World"<<endl;
    int a[6]={48,36,25,58,12,0};
    int flg=0, n=sizeof(a)/sizeof(a[0]);

    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1-i; j++){
            if(a[j]>a[j+1]){
                swap(a[j], a[j+1]);
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
