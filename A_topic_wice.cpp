#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;cin>>s;
    vector<char>v;
    int n=s.size(),ans=0;
   for(int i=0;i<n;i++){
    if(s[i]=='/') ans++;
   }
   if(ans==n) cout<<"/"<<endl;
   else {
     for(int i=0;i<n;i++){
        if(s[i]!='/'){
            v.push_back(s[i]);
        }
        else{
            if(s[i+1]>'/')
            v.push_back(s[i]);
        }
    }
    for(auto s:v){
        cout<<s;
    }
   }
    return 0;
}