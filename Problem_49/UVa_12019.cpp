#include <iostream>
#include <string>
using namespace std;

int main()
{
    int month[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
    int sumd;
    int n;
    int ans;
    int m, d;
    cin >> n;
    for (int i = 0;i < n;i++)
    {
        sumd = 0;
        cin >> m >> d;
        for (int j = 0;j < m;j++)
        {
            sumd += month[j];
        }
        ans = sumd + d;
        if (ans % 7 == 1)
        {
            cout << "Saturday" << endl;
        }
        else if (ans % 7 == 2)
        {
            cout << "Sunday" << endl;
        }
        else if (ans % 7 == 3)
        {
            cout << "Monday" << endl;
        }
        else if (ans % 7 == 4)
        {
            cout << "Tuesday" << endl;
        }
        else if (ans % 7 == 5)
        {
            cout << "Wednesday" << endl;
        }
        else if (ans % 7 == 6)
        {
            cout << "Thursday" << endl;
        }
        else if (ans % 7 == 0)
        {
            cout << "Friday" << endl;
        }
    }
    return 0;
}
