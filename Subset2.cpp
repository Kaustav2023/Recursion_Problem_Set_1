#include<bits/stdc++.h>
using namespace std;

void subset2(int index,vector<int>&num,vector<int>sub,vector<vector<int>>&ans){
     
     ans.push_back(sub);
     for(int i=index;i<num.size();i++)
     {
        if(i>index && num[i]==num[i-1]) continue;

        sub.push_back(num[i]);
        subset2(i+1,num,sub,ans);
        sub.pop_back();
     }
}




int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int>sub;
    vector<vector<int>>ans;
    subset2(0,v,sub,ans);
    for(auto &a:ans){
        for(auto &b:a){
            cout<<b<<" ";
        }
        cout<<endl;
    }
    
}