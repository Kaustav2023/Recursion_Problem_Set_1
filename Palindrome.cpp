#include<bits/stdc++.h>
 
using namespace std;

int c=1;
void palindrome(int p,int q,string st){
     
   if(p>q)
      return;

   if(st[p]!=st[q]){
       c=-1;
    }
    palindrome(p+1,q-1,st);
}
int main(){

   string s;
   cin>>s;
   int i=0;
   int j=s.size()-1;
   transform(s.begin(),s.end(),s.begin(), ::toupper);
   palindrome(i,j,s);
   if(c==1){
    cout<<"It is a palindrome ";
   }
   else
    cout<<"It is not a palindrome ";
}