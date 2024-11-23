#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--){
        int n,q;cin>>n>>q;
        vector<int>v;
        map<int,set<int> >mp;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            mp[x].insert(i);
        }
        while(q--){
            int l,r;cin>>l>>r;
            if((mp.find(l))==mp.end() || (mp.find(r))==mp.end())
            cout<<"NO"<<'\n';
            else{
                int pos=*mp[l].begin();
                int dis=*mp[r].rbegin();
                if(pos<dis)cout<<"YES"<<'\n';
                else cout<<"NO"<<'\n';
            }
        } 
    }
    return 0;
}