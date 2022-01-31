#include<bits/stdc++.h>
#define ll long long
using namespace std;

void mergeArrays(int x[], int y[], int a[], int s, int e){
    int mid = (s+e)/2;
    int i = s;
    int j = mid+1;
    int k = s;
    while(i<=mid && j<=e){
        if(x[i]<y[j]){
            a[k] = x[i];
            i++;
            k++;
        }
        else{
            a[k] = y[j];
            j++;
            k++;
        }
    }
    while(i<=mid){
        a[k] = x[i];
        k++;
        i++;
    }
    while(j<=e){
        a[k] = y[j];
        k++;
        j++;
    }
}

void mergeSort(int a[], int s, int e){
    if(s>=e) return;
    int mid = (s+e)/2;
    int x[100], y[100];
    for(int i = 0; i<=mid; i++){
        x[i] = a[i];
    }
    for(int i = mid+1; i<e+1; i++){
        y[i] = a[i];
    }
    mergeSort(x, s, mid);
    mergeSort(y, mid+1, e);
    mergeArrays(x, y, a, s, e);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a[] = {4,2,6,5,1,-7,3};
    mergeSort(a, 0, 6);
    for(int x:a) cout<<x<<" ";
    return 0;
}