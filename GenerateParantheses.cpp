#include<bits/stdc++.h>
using namespace std;
string st;
vector<string>subset;
vector<string> Generate(int O,int C){
    
    if(O==0 && C==0){
         subset.push_back(st);
         
    }
    if(O>0){
        st.push_back('(');
        Generate(O-1,C);
        st.pop_back();
    }
    if(C>0){
         if(O<C){
            st.push_back(')');
            Generate(O,C-1);
            st.pop_back();
         }
    }
    return subset;

}

int main(){
    int n;
    cin>>n;
    int i=n;
    int j=n;
    auto vec=Generate(i,j);
    for(auto ans:vec){
        
            cout<<ans<<" ";
        
    }
    
    
}