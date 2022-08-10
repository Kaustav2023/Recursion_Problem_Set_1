#include <bits/stdc++.h>
using namespace std;

void subsequence(int index, vector<int> &sub, vector<int> &num)
{
    cout<<" HI "<<endl;
    if(index==num.size()){
        for(auto ans:sub){
            cout<<ans<<" ";
        }
        cout<<endl;
        return;
    }


    sub.push_back(num[index]);
    subsequence(index + 1, sub, num);
    sub.pop_back();
   

    subsequence(index + 1,sub, num);
}

int main()
{

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<int> ans;
    subsequence(0,ans, v);
}