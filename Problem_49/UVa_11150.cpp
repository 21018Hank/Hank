#include <iostream>
using namespace std;

int main()
{
    int n;
    int sum;
    int a;
    int b;
    while (cin >> n)
    {
        sum = n;
        n++;
        for (;;)
        {
            a = n / 3;
            b = n % 3;
            n = a + b;
            sum += a;
            if (a + b < 3)
            {
                cout << sum << endl;
                break;
            }
        }
    }

    return 0;
}
