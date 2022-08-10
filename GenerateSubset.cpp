#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>valid;

void generate(vector<int>&v,int i,vector<int> &num){
       
      if(i==num.size()){
            valid.push_back(v);
            return;
      }
      generate(v,i+1,num);
     
      v.push_back(num[i]);
      generate(v,i+1,num);
      v.pop_back();    
}



int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    } 
     
    vector<int> vec;
    generate(vec,0,v);
    for(auto a:valid){
        
       for(auto b:a){
        cout<<b<<" ";
       }
        cout<<endl;
    }
}