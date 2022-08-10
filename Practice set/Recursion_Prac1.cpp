#include<bits/stdc++.h>
using namespace std;

//RECURSIVE LEAP OF FAITH 
//1, 2, 3, 4, 5, 6, 7, 8, 9, 10
//                    n-2  n-1   n
void allNum(int n){
    if(n==0)
    return;
    allNum(n-1);
    cout<<n<<" ";
}
int main(){
    
    int n;
    cin>>n;
    allNum(n);
    
}