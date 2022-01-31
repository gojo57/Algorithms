#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int a[], int n){
    for(int count = 1; count<n; count++){
        for(int j = 0; j<n-1; j++){
            if(a[j]>a[j+1]) swap(a[j], a[j+1]);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin>>n;
    int a[n];
    for(auto &x:a) cin>>x;
    bubbleSort(a, n);
    for(int i = 0; i<n; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}