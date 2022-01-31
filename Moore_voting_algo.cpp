#include<bits/stdc++.h>
#define ll long long
using namespace std;

int majorityElmt(vector <int> &v){
    int cand = v[0];
    int count = 1;
    int n = v.size();
    for(int i = 1; i<n; i++){
        if(v[i]==cand){
            count++;
        }
        else{
            count--;
            if(count==0){
                cand = v[i];
                count = 1;
            }
        }
    }
    return cand;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin>>n;
    vector <int> v(n);
    for(auto &i:v) cin>>i;
    cout<<majorityElmt(v);
    return 0;
}