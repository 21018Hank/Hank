#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct compare
{
    int m;
    bool operator()(int a, int b)
    {
        if (a % m != b % m)
        {
            return a % m < b % m;
        }
        else if ((a % 2 != 0) != (b % 2 != 0))
        {
            return a % 2 != 0;
        }
        else if (a % 2 != 0)
        {
            return a > b;
        }
        else
        {
            return a < b;
        }
    }
};

int main()
{
    int n,m;
    int a;
    vector<int>vec;
    while (cin >> n >> m)
    {
        vec.clear();
        compare cmp;
        cmp.m = m;

        if (n == 0 && m == 0)
        {
            cout << "0 0" << endl;
            break;
        }
        else
        {
            for (int i = 0;i < n;i++)
            {
                cin >> a;
                vec.push_back(a);
            }
            cout << n << " " << m << endl;
            sort(vec.begin(), vec.end(), cmp);
            
        }
        for (auto p : vec)
        {
            cout << p << endl;
        }
        
    }   
    return 0;
}
