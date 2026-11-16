#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    int s, n, i;
    double p, j, r, k, a;
    cin >> s;
    for (j = 0;j < s;j++)
    {
        cin >> n >> p >> i;
        r = 1;
        for (k = 0;k < n;k++)
        {
            r *= (1-p);
        }
        a = 1;
        for (k = 0;k < i-1;k++)
        {
            a *= (1-p);
        }
        a *= p;
        double ans;
        ans = a / (1 - r);
        cout << fixed << setprecision(4) << ans << endl;
    }
    return 0;
}
