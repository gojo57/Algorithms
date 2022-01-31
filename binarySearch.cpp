#include<bits/stdc++.h>
using namespace std;

int binSearch(int a[], int start, int end, int key){
    while(start<=end){
        int mid = start+(end-start)/2;
        if(a[mid]==key) return mid;
        else if(a[mid]>key){
            end = mid-1;
            binSearch(a, start, end, key);
        }
        else{
            start = mid+1;
            binSearch(a, start, end, key);
        }
    }
    return -1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin>>n;
    int a[n];
    for(auto &x:a) cin>>x;
    sort(a, a+n);
    int start = 0; int end = n-1;
    int key; cin>>key;
    int x = binSearch(a, start, end, key);
    if(x!=-1) cout<<"FOUND AT INDEX: "<<x<<endl;
    else cout<<"NOT FOUND LOL!!"<<endl;
    return 0;
}