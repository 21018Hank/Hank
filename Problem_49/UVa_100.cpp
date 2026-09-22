#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b, min, max, i, length = 1, lengthmax = 1, j, x, y, temp;

    while (cin >> a >> b)
    {
        lengthmax = 1;

        if (a > b)
        {
            max = a;
            min = b;
        }
        else
        {
            max = b;
            min = a;
        }
        for (i = min;i <= max;i++)
        {
            temp = i;

            length = 1;

            for (;;)
            {
                if (temp == 1)
                {
                    break;
                }

                if (temp % 2 != 0)
                {
                    temp = temp * 3 + 1;
                }
                else
                {
                    temp = temp / 2;
                }
                length++;

            }

            if (length > lengthmax)
            {
                lengthmax = length;
            }
        }

        cout << a << " " << b << " " << lengthmax << endl;
    }
}
