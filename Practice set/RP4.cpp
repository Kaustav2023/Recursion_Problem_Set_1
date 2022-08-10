#include<bits/stdc++.h>
using namespace std;

//Pattern Printing
//1 2 3 4 5      n
//1 2 3 4         
//1 2 3          
//1 2            
//1 

void Pattern1(int n){

    if(n==0){
        return;
    }
    for(int i=1;i<=n;i++){
        cout<<i<<" "; 
    }
    cout<<endl;
    Pattern1(n-1);
   
}
void Pattern2(int n){
  
    if(n==0){
        return;
    }
    Pattern2(n-1);
    for(int i=1;i<=n;i++){
        cout<<i<<" "; 
    }
    cout<<endl;
}


void Pattern3(int n){
    
    if(n==0){
        return;
    }
    for(int i=1;i<=n;i++){
        cout<<i<<" "; 
    }
    cout<<endl;
    Pattern3(n-1);
    for(int i=1;i<=n;i++){
        cout<<i<<" "; 
    }
    cout<<endl;
}
void Pattern4(int n){
    
    if(n==1){
        cout<<1<<"\n";
        return;
    }
    for(int i=1;i<=n;i++){
        cout<<i<<" "; 
    }
    cout<<endl;
    Pattern4(n-1);
    for(int i=1;i<=n;i++){
        cout<<i<<" "; 
    }
    cout<<endl;
}


int main(){
  Pattern1(5);
  cout<<endl;
  Pattern2(5);
  cout<<endl;
  Pattern3(5);
  cout<<endl;
   Pattern4(5);
}