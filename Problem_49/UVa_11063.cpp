#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int main()
{
    int n;
    int c = 0;
    int num;
    vector<int>vec;
    vector<int>ori;
    vector<int>ans;
    set<int>se;
    while (cin >> n)
    {
        c++;
        int judge = 0;
        for (int i = 0;i < n;i++)
        {
            cin >> num;
            vec.push_back(num);
        }
        ori.assign(vec.begin(), vec.end());
        sort(vec.begin(), vec.end());
        ans.assign(vec.begin(), vec.end());
        for (int i = 0;i < vec.size();i++)
        {
            if (ori[i] != ans[i])
            {
                judge = 1;
                break;
            }
        }
        for (auto p : vec)
        {
            if (p<1)
            {
                judge = 1;
                break;
            }
        }
        for (int i = 0;i < vec.size()-1;i++)
        {
            if (ans[i] == ans[i + 1])
            {
                judge = 1;
                break;
            }
        }
        if (judge != 1)
        {
            for (int i = 0;i < vec.size();i++)
            {
                for (int j = i;j < vec.size();j++)
                {
                    int s = ans[i] + ans[j];
                    if (se.find(s) == se.end())
                    {
                        se.insert(s);
                    }
                    else
                    {
                        judge = 1;
                        break;
                    }
                }
                if (judge == 1)
                {
                    break;
                }
            }
        }
        if (judge == 0)
        {
            cout << "Case #" << c << ": It is a B2-Sequence." << endl;
        }
        else
        {
            cout << "Case #" << c << ": It is not a B2-Sequence." << endl;
        }
        vec.clear();
        ori.clear();
        ans.clear();
        se.clear();
        cout << endl;
    }
    return 0;
}
