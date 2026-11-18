#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;

double degreetrans(double p)
{
    p = p * acos(-1) / 180;
    return p;
}
double chord(double s, double a)
{
    double c;
    c = 2 * s * s - (2 * s * s * cos(a));
    double ans = sqrt(c);
    return ans;
}
double arc(double s,double a)
{
    double c;
    c = s * a;
    return c;
}
int main()
{
    string str;
    double s, a;
    double s1, a1;
    while (cin >> s >> a >> str)
    {
        if (str == "min")
        {
            a = a / 60;
        }
        if (a > 180)
        {
            a = 360 - a;
        }
        a1 = degreetrans(a);
        s1 = s+6440;
        double ansarc = arc(s1, a1);
        double anschord = chord(s1, a1);
        cout << fixed << setprecision(6) << ansarc << " ";
        cout << fixed << setprecision(6) << anschord << endl;
    }
    return 0;
}
