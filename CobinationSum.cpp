#include<bits/stdc++.h>
using namespace std;


void ComboSum(int index,int target,vector<int>&vec, vector<vector<int>>&ans, vector<int> &sub){
     
     if(index==vec.size()){
        if(target==0){
               ans.push_back(sub);
        }
        return;
     }
    if(vec[index]<=target){
        sub.push_back(vec[index]);
        ComboSum(index,target-vec[index],vec,ans,sub);
        sub.pop_back();
    }
    ComboSum(index+1,target,vec,ans,sub);
  

}



int main(){
    
    int n;
    cin>>n;
    vector<int> v(n);

    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    cout<<"Enter the Target "<<endl;
    int target;
    cin>>target;
    vector<vector<int>>ans;
    vector<int>sub;
    ComboSum(0,target,v,ans,sub);
    for(auto &a:ans){
        for(auto &b:a){
            cout<<b<<" ";
        }
        cout<<endl;
    }

}