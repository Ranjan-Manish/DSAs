/* Selection sort */
// Used to sort arrays in ascending order or descending order
// Worst time complexity: O(n^2)
// Best time complexity: O(n^2)


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[6]={48,23,56,-1,12,0};
    int temp, min, n=sizeof(a)/sizeof(a[0]);
    
    for(int i=0; i<n-1;i++){
        min=i;
        for(int j=i+1;j<n;j++){
            if (a[j]<a[min]){
                min=j;
            }
        }
        if(min!=i){
            swap(a[i], a[min]);
        }
    }

    cout<<"The sorted array is: "<<endl;
    for(int y=0; y<n;y++){
        cout<<a[y]<<" ";
    }

    return 0;
}
