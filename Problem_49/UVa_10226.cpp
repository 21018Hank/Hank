#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    vector<pair<string, double>>vec;
    map<string, double>mp;
    string s;
    int n;
    cin >> n;
    cin.ignore(1000,'\n');
    for (int i = 0;i < n;i++)
    {
        mp.clear();
        int sum = 0;
        while (getline(cin, s) && s == "")
        {

        }
        do
        {
            mp[s]++;
            sum++;
        } while (getline(cin, s) && s != "");
        vec.assign(mp.begin(), mp.end());
        for (auto p : vec)
        {
            double h = p.second *100 / sum;
            cout << p.first << " " << fixed << setprecision(4) << h << endl;
        }
        cout << endl;
    }
    return 0;
}
