#include<bits/stdc++.h>
using namespace std;

//5!
//5*4*3*2*1 = 120
//n*(n-1)
int fact(int n){
    if(n==1)
    return 1;
    return n*fact(n-1);
}


int main(){
    cout<<fact(5);
}