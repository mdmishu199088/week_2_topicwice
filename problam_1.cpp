#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;cin>>n>>m;
    vector<int>v(n+5);
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    set<int>s;
    map<int,int>mp;
    int j=n;
    for(int i=n;0<=i;i--){
        s.insert(v[i]);
        mp[j]=s.size();
        j--;
    }
    while(m--){
        int x;cin>>x;
        cout<<mp[x]<<'\n';
    }
    return 0;
}