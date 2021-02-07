/* Shell Sort Algorithm */
// Worst case time complexity: O(n^2)


#include <bits/stdc++.h>
using namespace std;

void shell_sort(int a[], int n){
    for(int gap=4; gap>=1; gap=gap/2){
        for(int j=gap; j<n; j++){
            for(int i=j-gap; i>=0; i=i-gap){
                if(a[i]<a[i+gap]){
                    break;
                }
                else{
                    swap(a[i], a[i+gap]);
                }
            }
        }
    }
    return;
}

int main()
{
    cout<<"Hello World"<<endl;
    int a[]={23,29,15,19,31,7,9,5,2};
    int n=sizeof(a)/sizeof(a[0]);
    shell_sort(a,n);
    cout<<"The sorted array is:"<<endl;
    for(int x=0; x<n; x++){
        cout<<a[x]<<" ";
    }

    return 0;
}
