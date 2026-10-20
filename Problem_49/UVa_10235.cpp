#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    long long a,b,i,j1,j2;
    string s;
    while (cin >> a)
    {
        j1 = 0;
        j2 = 0;
        s = to_string(a);
        reverse(s.begin(),s.end());
        b = stoll(s);
        for (i = 2;i*i <= a;i++)
        {
            if (a % i == 0)
            {
                j1 = 1;
                break;
            }
        }
        for (i = 2;i*i <= b;i++)
        {
            if (b % i == 0)
            {
                j2 = 1;
                break;
            }
        }
        if (a == 1)
        {
            cout << a << " is not prime." << endl;
        }
        else if (a == 2)
        {
            cout << a << " is prime." << endl;
        }
        else if (j1 == 1)
        {
            cout << a << " is not prime." << endl;
        }
        else if (j1 == 0 && j2 == 1)
        {
            cout << a << " is prime." << endl;
        }
        else if(j1 == 0 && j2 == 0 && a!=b)
        {
            cout << a << " is emirp." << endl;
        }
        else if (j1 == 0 && j2 == 0 && a==b)
        {
            cout << a << " is prime." << endl;
        }

    }
    return 0;
}
