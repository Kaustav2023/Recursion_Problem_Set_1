#include<bits/stdc++.h>
using namespace std;

void comboSum2(int index,int target,vector<int>&num,vector<int>&sub,vector<vector<int>> &ans){

        if(target==0){
           ans.push_back(sub);
           return;
        }


       for(int i=index;i<num.size();i++){
          if(i>index && num[i]==num[i-1]){
            continue;
          }
          if(num[i]>target) break;

          sub.push_back(num[i]);
          comboSum2(index+1,target-num[i],num,sub,ans);
          sub.pop_back();
       }
       //There is not Not Pick recursion method because this is not a Pick/Not Pick problem solution 
}

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<"Enter the target "<<endl;
    int target;
    cin>>target;
    sort(v.begin(),v.end());
    vector<vector<int>> ans;
    vector<int>sub;
    comboSum2(0,target,v,sub,ans);
     
    for(auto &a:ans){
        for(auto &b: a){
            cout<<b<<" ";
        }
        cout<<endl;
    }

}