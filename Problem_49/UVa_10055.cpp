#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    long long a, b, c, d;
    while (cin >> a >> b)
    {
        c = a - b;
        d = abs(c);
        cout << d << endl;
    }
    return 0;
}
