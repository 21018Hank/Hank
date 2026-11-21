#include <iostream>
#include <string>
using namespace std;

int cal(int sum)
{
    string sss;
    int ans = 0;
    sss = to_string(sum);
    for (int i = 0;i < sss.length();i++)
    {
        ans += sss[i] - '0';
    }
    return ans;
}
int main()
{
    string s;
    while (cin >> s && s != "0")
    {
        int d = 1;
        int sum = 0;
        for (int i = 0;i < s.length();i++)
        {
            sum += s[i] - '0';
        }
        if (sum % 9 == 0)
        {
            cout << s << " is a multiple of 9 and has 9-degree ";
            for (;;)
            {
                if (sum == 9)
                {
                    cout << d << "." << endl;
                    break;
                }
                else
                {
                    d++;
                    sum = cal(sum);
                }
            }
        }
        else
        {
            cout << s << " is not a multiple of 9." << endl;
        }      
    }
    return 0;
}
