#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double a, b, ans1, ans2;
    double a1, a2, b1, b2, c1, c2, d1, d2;
    while (cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2 >> d1 >> d2)
    {
        if (a1 == c1 && a2 == c2)
        {
            a = a1 - b1;
            b = a2 - b2;
            ans1 = d1 - a;
            ans2 = d2 - b;
        }
        else if (a1 == d1 && a2 == d2)
        {
            a = a1 - b1;
            b = a2 - b2;
            ans1 = c1 - a;
            ans2 = c2 - b;
        }
        else if (b1 == c1 && b2 == c2)
        {
            a = b1 - a1;
            b = b2 - a2;
            ans1 = d1 - a;
            ans2 = d2 - b;
        }
        else if (b1 == d1 && b2 == d2)
        {
            a = b1 - a1;
            b = b2 - a2;
            ans1 = c1 - a;
            ans2 = c2 - b;
        }        
        cout << fixed << setprecision(3) << ans1 << " " << fixed << setprecision(3) << ans2 << endl;
    }
    return 0;
}
