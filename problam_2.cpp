#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;cin>>n;
    multiset<int> mt;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        mt.insert(x);
    }
    int ans=0,problem=1;
    while(!mt.empty()){
        auto it=mt.lower_bound(problem);
        if(it!=mt.end()){
            ans++;
            mt.erase(it);
            problem++;
        }
        else break;
    }
    cout<<ans;
    return 0;
}