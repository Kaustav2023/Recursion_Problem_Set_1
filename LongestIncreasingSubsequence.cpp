#include<bits/stdc++.h>
using namespace std;
/* 
 I am writing this wrt Brute Force Recursion Method
 First you have to understand that i int LIS() it indicates the element wrt whom you are finding the longest increasing subsequence 
 Meaning : if the given vector of elements are : 10 9 2 5 3 7 101 18
 i in LIS means   if i is 18                                      |
 it means wrt to 18 we are finding the longest increasing susbsequence 
 Then we check find the maximum length for each of the element given in the vector 

 Things you have to keep in mind while coding this function is 
   1. Check length of longest increasing subsequence wrt element (index -1) elements 
   2. Meaning for loop will be used in this case.
   3. The entry condition AFTER entering the for loop which is num[i]>num[j]
   4. Now You might be confused about the base condition , right?
      For this code to run the base condition is the entry condition of the for loop 
      why ? because we are checking upto the ith element whether the element coming before this is smaller than itself
      so if we reached upto i-1 position we are done and can exit the loop 
   5. In the main function when we are calling this function we are actually using for loop to check for each element; 
*/

int LIS(int i,vector<int>&num,vector<int> &dp){
    int c=1;
    if(dp[i]!=-1)
    return dp[i];
    for(int j=0;j<i;j++){
       
         if(num[i]>num[j]){
            c=max(c,LIS(j,num,dp)+1);
         }
    }
    return dp[i]=c;
}


int main(){
    int n;
    cin>>n;
    vector<int> v(n);

    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int> dp(n);
    for(int i=0;i<n;i++){
        dp[i]=-1;
    }
    int ans=0;
    for(int i=0;i<n;i++){
        ans=max(ans,LIS(i,v,dp));
    }
    cout<<ans;
}