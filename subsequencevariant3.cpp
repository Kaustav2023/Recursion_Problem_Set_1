#include <bits/stdc++.h>
using namespace std;
int c;
int subsequence(int index, int sum, vector<int> &sub, vector<int> &num, int target)
{

    if (index == num.size())
    {
        if (sum == target)
        {
            
            return 1;
            
        }
        else{
            return 0;
        }
        
    }

    sub.push_back(num[index]);
    sum+=num[index];
    int l=subsequence(index + 1, sum, sub, num, target);
    c+=c;
    sum-=num[index];
    sub.pop_back();
    

    int r=subsequence(index + 1, sum, sub, num, target);
    
    return l+r;
    
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
    int count=subsequence(0, 0, ans, v, 2);
    cout<<count<<endl;
    }