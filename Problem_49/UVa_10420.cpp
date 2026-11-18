#include <iostream>
#include <map>
#include <algorithm>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    int n,i;
    string s,a;
    map<string, int>mp;
    cin >> n;
    cin.ignore();
    for (i = 0;i < n;i++)
    {
        getline(cin,s);
        stringstream ss(s);
        ss >> a;
        mp[a]++;
    }
    for (auto x : mp)
    {
        cout << x.first << " " << x.second << endl;
    }

    return 0;
}
