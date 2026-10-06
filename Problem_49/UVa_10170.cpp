#include <iostream>
using namespace std;

int main()
{
    long long s, d, sum = 0;

    while (cin >> s >> d)
    {
        sum = 0;
        for (;;)
        {
            sum = sum + s;

            if (sum >= d)
            {
                cout << s << endl;
                break;
            }
            s++;
        }
    }

    return 0;
}
