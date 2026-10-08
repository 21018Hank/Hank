#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    long long a,i,len;
    string s;
    while (cin >> a && a!=0)
    {
        for (;;)
        {
            if (a >= 0 && a <= 9)
            {
                cout << a << endl;
                break;
            }
            else
            {
                s = to_string(a);
                len = s.length();
            }
            a = 0;
            for (i = 0;i < len;i++)
            {
                a = a + (s[i] - '0');
            }
            s = "";
        }
    }
    return 0;
}
