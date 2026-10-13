#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    int lena, lenb, i, n, s, judge, j ,m,h;
    string a, b;


    while (getline(cin, a) && getline(cin, b))
    {
        vector<int>vec(26, 0);
        vector<int>veca(26, 0);
        vector<int>vecb(26, 0);

        lena = a.length();
        lenb = b.length();
        for (i = 0;i < lena;i++)
        {
            s = int(a[i]);
            n = s - 97;
            veca[n]++;
        }
        for (i = 0;i < lenb;i++)
        {
            s = int(b[i]);
            n = s - 97;
            vecb[n]++;
        }
        for (i = 0;i < 26;i++)
        {
            judge = 0;
            if (veca[i] != 0 && vecb[i] != 0)
            {             
                judge = min(veca[i], vecb[i]);
                for (j = 0;j < judge;j++)
                {
                    h = i + 97;
                    m = char(h);
                    cout << char(m);
                }
            }
        }
        cout << endl;
    }
    return 0;
}

