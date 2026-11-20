#include <iostream>
#include <deque>
#include <cmath>
#include <sstream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x, a;
    deque<int>d;
    string s;
    while (cin >> x)
    {
        d.clear();
        cin.ignore();
        getline(cin, s);
        stringstream ss(s);
        while (ss >> a)
        {
            d.push_front(a);
        }
        long long sum = 0;
        for (int i = d.size() - 1;i >= 1;i--)//i是次方，d[i]是係數
        {
            sum += (d[i] * i * pow(x, i - 1));
        }
        cout << sum << endl;
    }
    return 0;
}
