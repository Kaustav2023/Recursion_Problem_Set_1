#include<bits/stdc++.h>
using namespace std;

//Sum of Digits of a number
//12345
//1234 5    5
//123 4     9
//12 3     12
//1 2      14
//0 1      15

int sum_Digit(int n){
     
    if(n==0)
    return 0;
    int ld=n%10;
    return sum_Digit(n/10)+ld;
}

int main(){
    cout<<sum_Digit(12345);
}