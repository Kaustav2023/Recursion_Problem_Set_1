#include<bits/stdc++.h>
using namespace std;

//Fibonacci :0 1 1 2 3 5 8 13 21
//           0 1 2 3 4 5 6 7  8          
// (n-2) + (n-1)= n 
int fib(int n){

   if(n==0)
      return 0;
   if(n==1)
      return 1; 
   int sum=fib(n-2)+fib(n-1);
    
   return sum;

}
int main(){
    
   cout<<fib(8);
}