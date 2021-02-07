/* Insertion sort */
//Used for sorting the array in ascending or decending order
// Wort time complexity: O(n^2)
// Best time complexity: O(n)


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Hello World"<<endl<<"Enter the size of the array"<<endl;
    cin>>n;
    int a[n],temp;
    for(int i=0;i<n;i++){
        cout<<"Enter the data "<<i<<" "<<endl;
        cin>>a[i];
    }

    for(int j=1; j<n;j++){
        int k=j-1;
        temp=a[j];
        while(k>=0 && temp<a[k]){
            a[k+1]=a[k];
            k--;
        }
        a[k+1]=temp;
    }
    cout<<"The sorted array is:"<<endl;
    for(int x=0; x<n; x++){
        cout<<a[x]<<" ";
    }

    return 0;
}
