#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;cin>>n;
    set<pair<int,int> >s;
    multiset<pair<int,int> >ml;
    vector<int>ans;
    int customer=1;
    while(n--){
        int type;cin>>type;
        if(type==1){
            int money;cin>>money;
            s.insert(make_pair(customer,money));
            ml.insert(make_pair(money,-customer));
            customer++;
        }
        else if(type==2){
            int pos=s.begin()->first,money=s.begin()->second;
            ans.push_back(pos);
            s.erase(s.begin());
            ml.erase(make_pair(money,-pos));
        }
        else{
            int money=ml.rbegin()->first,pos=-ml.rbegin()->second;
            ans.push_back(pos);
            ml.erase(--ml.end());
            s.erase(make_pair(pos,money));
        }
    }
    for(auto value:ans){
        cout<<value<<" ";
    }
    return 0;
}