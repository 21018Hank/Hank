#include <iostream>
using namespace std;

int main()
{
    long long a, b, c, d,e=0, carry = 0;

    for (;;)
    {
        cin >> a >> b;

        carry = 0;
        e = 0;

        if (a == 0 && b == 0)
        { 
            break;
        }

        for (;;)
        {
            c = a % 10;
            d = b % 10;

            if (c + d + e >= 10)
            {
                carry++;
                e = 1;
            }
            else
            {
                e = 0;
            }

            a = a / 10;
            b = b / 10;

            if (a == 0 && b == 0)
            {
                break;
            }
        }
        if (carry == 0)
        {
            cout << "No carry operation." << endl;
        }
        else if(carry == 1)
        {
            cout << carry << " carry operation." << endl;
        }
        else
        {
            cout << carry << " carry operations." << endl;
        }
    }

    return 0;
}

 
