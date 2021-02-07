/* Selection sort */
// Used to sort arrays in ascending order or descending order
// Worst time complexity: O(n^2)
// Best time complexity: O(n^2)


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Hello World"<<endl<<"Enter the size of array"<<endl;
    cin>>n;
    int a[n], temp,min;
    for(int x=0; x<n; x++){
        cout<<"Enter the data"<<endl;
        cin>>a[x];
    }

    for(int i=0; i<n-1;i++){
        min=i;
        for(int j=i+1;j<n;j++){
            if (a[j]<a[min]){
                min=j;
            }
        }
        if(min!=i){
            temp=a[i];
            a[i]=a[min];
            a[min]=temp;
        }
    }

    cout<<"The sorted array is: "<<endl;
    for(int y=0; y<n;y++){
        cout<<a[y]<<" ";
    }

    return 0;
}
