/* Insertion sort */
//Used for sorting the array in ascending or decending order
// Wort time complexity: O(n^2)
// Best time complexity: O(n)


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[6]={48,23,56,-1,12,0};
    int temp, n=sizeof(a)/sizeof(a[0]);

    for(int i=1; i<n;i++){
        int j=i-1;
        temp=a[i];
        while(j>=0 && temp<a[j]){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
    cout<<"The sorted array is:"<<endl;
    for(int x=0; x<n; x++){
        cout<<a[x]<<" ";
    }

    return 0;
}
