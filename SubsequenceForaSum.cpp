#include <bits/stdc++.h>
using namespace std;

bool subsequence(int index, int sum, vector<int> &sub, vector<int> &num, int target)
{

    if (index == num.size())
    {
        if (sum == target)
        {
            for (auto ans : sub)
            {
                cout << ans << " ";
            }
            cout << endl;
            return true;
        }
        else return false;
    }

    sub.push_back(num[index]);
    sum += num[index];
    if(subsequence(index + 1, sum, sub, num, target)==true) return true;
    sub.pop_back();
    sum -= num[index];

    subsequence(index + 1, sum, sub, num, target);
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
    subsequence(0, 0, ans, v, 2);
}