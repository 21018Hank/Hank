#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n;
    int i, j, timess, k;
    vector<char>alp;
    vector<char>times;
    for (i = 1;i <= n;i++)
    {
        alp.clear();
        times.clear();
        cin >> s;
        cout << "Case " << i << ": ";
        for (j = 0;j < s.length();j++)
        {
            if (s[j] >= 'A' && s[j] <= 'Z')
            {
                alp.push_back(s[j]);
                for (j = j + 1;j < s.length();j++)
                {
                    if (s[j] >='0'&&s[j] <= '9')
                    {
                        times.push_back(s[j]);
                    }
                    else
                    {
                        j = j - 1;
                        string s1(times.begin(), times.end());
                        timess = stoi(s1);
                        for (k = 0;k < timess;k++)
                        {
                            cout << alp[0];
                        }
                        alp.clear();
                        times.clear();
                        break;
                    }
                }
            }
        }
        string s1(times.begin(), times.end());
        timess = stoi(s1);
        for (k = 0;k < timess;k++)
        {
            cout << alp[0];
        }
        alp.clear();
        times.clear();
        cout << endl;
    }
    return 0;
}
