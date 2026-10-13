#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

bool cmp (const pair<int, int>& a, const pair<int, int>& b)
{
    if (a.second != b.second)
    {
        if (a.second < b.second)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        if (a.first > b.first)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    
}

int main()
{
    string s="";
    while (getline(cin, s))
    {
        int arr[300] = { 0 }, i, a;
        vector<pair<int, int>>vec;
        vec.clear();
        int len = s.length();
        for (i = 0;i < len;i++)
        {
            a = (unsigned int)s[i];
            arr[a]++;
        }
        for (i = 0;i <= 256;i++)
        {
            if (arr[i] > 0)
            {
                vec.push_back({i, arr[i]});
            }
        }
        sort(vec.begin(), vec.end(), cmp);

        for (auto p : vec)
        {
            cout << p.first << " " << p.second << endl;
        }
    }
    return 0;
}
