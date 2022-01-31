#include<bits/stdc++.h>
#define ll long long
using namespace std;

int partition(int a[], int s, int e){
    int k = a[e];
    int i = s;
    for(int j = s; j<e; j++){
        if(a[j]<k){
            swap(a[i], a[j]);
            i++;
        }
    }
    swap(a[i], a[e]);
    return i;
}

void quickSort(int a[], int s, int e){
    if(s>=e) return;
    int p = partition(a, s, e);
    quickSort(a, s, p-1);
    quickSort(a, p+1, e);
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a[] = {4,2,6,5,1,-7,3};
    quickSort(a, 0, 6);
    for(auto x:a) cout<<x<<" ";
    return 0;
}