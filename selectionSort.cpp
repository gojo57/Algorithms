#include<bits/stdc++.h>
using namespace std;

void selectionSort(int a[], int n){
    for(int i = 0; i<n-1; i++){
        int smallest = INT_MAX;
        int index;
        for(int j = i+1; j<n; j++){
            if(a[j]<smallest) {smallest = a[j]; index = j;}
        }
        if(a[i]>smallest) swap(a[i], a[index]);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin>>n;
    int a[n];
    for(auto &x:a) cin>>x;
    selectionSort(a, n);
    for(int i = 0; i<n; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}