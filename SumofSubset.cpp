#include<bits/stdc++.h>
using namespace std;

void subset(int index,vector<int> &num,vector<int>&sub,vector<vector<int>>&ans){
    
    if(index==num.size())
    {
        ans.push_back(sub);
        return;
    }
    subset(index+1,num,sub,ans);

    sub.push_back(num[index]);
    subset(index+1,num,sub,ans);
    sub.pop_back();
}


int arraySum(int index,int sum,vector<int>&num){
    if(index<0) return sum;
        sum+=num[index];
        arraySum(index-1,sum,num);
}
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int>sub;
    vector<vector<int>>ans;
    subset(0,v,sub,ans);
    vector<int>sumarray;
    for(auto &a:ans){
        int sum=arraySum(a.size()-1,0,a);
        sumarray.push_back(sum);
        
    }
    sort(sumarray.begin(),sumarray.end());
    for(auto &final:sumarray){
        cout<<final<<" ";
    }
}