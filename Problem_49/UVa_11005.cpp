#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

bool cmp(const pair<int, int>& a, const pair<int, int>& b)
{
    if (a.second != b.second)
    {
        return a.second < b.second;
    }
    else
    {
        return a.first < b.first;
    }
}
int main()
{
    int n;
    cin >> n;
    int a;
    vector<int>vec;
    vector<pair<int,int>>yy;
    vector<int>ans;
    for (int i = 1;i <= n;i++)
    {
        cout << "Case " << i << ":" << endl;
        vec.clear();
        for (int j = 0;j < 36;j++)
        {
            cin >> a;
            vec.push_back(a);
        }
        int q;
        cin >> q;
        long long test;
        for (int j = 0;j < q;j++)
        {
            cin >> test;
            for (int k = 2;k <= 36;k++)
            {
                long long temp = test;
                int sum = 0;
                if (temp == 0)
                {
                    sum = vec[0];
                }
                else
                {
                    while (temp > 0)
                    {
                        sum += vec[temp % k];
                        temp /= k;
                    }
                }
                yy.push_back({ k,sum });
            }
            sort(yy.begin(), yy.end(), cmp);
            for (auto p : yy)
            {
                if (p.second == yy[0].second)
                {
                    ans.push_back(p.first);
                }
                else
                {
                    break;
                }
            }
            yy.clear();
            cout << "Cheapest base(s) for number " << test << ": ";
            for (int k = 0;k < ans.size();k++)
            {
                if (k < ans.size() - 1)
                {
                    cout << ans[k] << " ";
                }
                else
                {
                    cout << ans[k] << endl;
                }
            }
            ans.clear();
        }
        if (i < n)
        {
            cout << endl;
        }
    }
    return 0;
}
