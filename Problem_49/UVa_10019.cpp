#include<iostream>
using namespace std;

int main()
{
    int n, temp, i[1000], m, b1, b2 = 0, a3 = 0, b3 = 0, c3 = 0, d3 = 0, a, b, c, d, e3 = 0;

    cin >> n;

    for (m = 0;m < n;m++)
    {
        cin >> i[m];
    }

    for (m = 0;m < n;m++)
    {
        temp = i[m];
        b1 = 0;

        int current = i[m];
        while (current > 0)
        {
            if (current % 2 == 1)
            {
                b1++;
            }
            current /= 2;
        }

        cout << b1;

        i[m] = temp;
        a = i[m] / 1000;
        b = (i[m]  % 1000) / 100;
        c = (i[m] % 100) / 10;
        d = i[m] % 10;

        if (a == 1 || a == 2 || a == 4 || a == 8)
        {
            a3 = 1;
        }
        else if (a == 3 || a == 5 || a == 6 || a == 9)
        {
            a3 = 2;
        }
        else if (a == 7)
        {
            a3 = 3;
        }
        else
        {
            a3 = 0;
        }

        if (b == 1 || b == 2 || b == 4 || b == 8)
        {
            b3 = 1;
        }
        else if (b == 3 || b == 5 || b == 6 || b == 9)
        {
            b3 = 2;
        }
        else if (b == 7)
        {
            b3 = 3;
        }

        else
        {
            b3 = 0;
        }

        if (c == 1 || c == 2 || c == 4 || c == 8)
        {
            c3 = 1;
        }
        else if (c == 3 || c == 5 || c == 6 || c == 9)
        {
            c3 = 2;
        }
        else if (c == 7)
        {
            c3 = 3;
        }

        else
        {
            c3 = 0;
        }

        if (d == 1 || d == 2 || d == 4 || d == 8)
        {
            d3 = 1;
        }
        else if (d == 3 || d == 5 || d == 6 || d == 9)
        {
            d3 = 2;
        }
        else if (d == 7)
        {
            d3 = 3;
        }

        else
        {
            d3 = 0;
        }

        e3 = a3 + b3 + c3 + d3;
        cout << " " << e3 << endl;
    }

    return 0;
}
