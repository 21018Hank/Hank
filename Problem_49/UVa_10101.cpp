#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    long long num, a, b, c, d, e, f, g, s1, s2, s3, s4, h, s5;
    int n = 1;
    while (cin >> num)
    {
        cout << setw(4) << n << ". ";
        n++;
        if (num == 0)
        {
            cout << "0" << endl;
        }
        else if (num < 10000000)
        {
            a = num / 10000000;
            b = num % 10000000;
            c = b / 100000;
            d = b % 100000;
            e = d / 1000;
            f = d % 1000;
            g = f / 100;
            h = f % 100;
            s1 = a % 100;
            s2 = c;
            s3 = e;
            s4 = g;
            s5 = h;
            if (s1 > 0)
            {
                cout << s1 << " " << "kuti" << " ";
            }
            if (s2 > 0 && s3 == 0 && s4 == 0 && s5 == 0)
            {
                cout << s2 << " " << "lakh" << endl;
            }
            else if (s2 > 0)
            {
                cout << s2 << " " << "lakh" << " ";
            }
            if (s3 > 0 && s4 == 0 && s5 == 0)
            {
                cout << s3 << " " << "hajar" << endl;
            }
            else if (s3 > 0)
            {
                cout << s3 << " " << "hajar" << " ";
            }
            if (s4 > 0 && s5 == 0)
            {
                cout << s4 << " " << "shata" << endl;
            }
            else if (s4 > 0)
            {
                cout << s4 << " " << "shata" << " ";
            }
            if (s5 > 0)
            {
                cout << s5;
            }
            cout << endl;
        }
        else if (num >= 10000000)
        {
            a = num / 10000000;
            b = num % 10000000;
            c = b / 100000;
            d = b % 100000;
            e = d / 1000;
            f = d % 1000;
            g = f / 100;
            h = f % 100;
            s1 = a % 100;
            s2 = c;
            s3 = e;
            s4 = g;
            s5 = h;
            if (a >= 100)
            {
                num = a;
                a = num / 10000000;
                b = num % 10000000;
                c = b / 100000;
                d = b % 100000;
                e = d / 1000;
                f = d % 1000;
                g = f / 100;
                if (a > 0)
                {
                    cout << a << " " << "kuti" << " ";
                }
                if (c > 0)
                {
                    cout << c << " " << "lakh" << " ";
                }
                if (e > 0)
                {
                    cout << e << " " << "hajar" << " ";
                }
                if (g > 0)
                {
                    cout << g << " " << "shata" << " ";
                }
            }
            if (s1 == 0)
            {
                cout << "kuti" << " ";
            }
            else if (s1 > 0)
            {
                cout << s1 << " " << "kuti" << " ";
            }
            if (s2 > 0 && s3 == 0 && s4 == 0 && s5 == 0)
            {
                cout << s2 << " " << "lakh" << endl;
            }
            else if (s2 > 0)
            {
                cout << s2 << " " << "lakh" << " ";
            }
            if (s3 > 0 && s4 == 0 && s5 == 0)
            {
                cout << s3 << " " << "hajar" << endl;
            }
            else if (s3 > 0)
            {
                cout << s3 << " " << "hajar" << " ";
            }
            if (s4 > 0 && s5 == 0)
            {
                cout << s4 << " " << "shata" << endl;
            }
            else if (s4 > 0)
            {
                cout << s4 << " " << "shata" << " ";
            }
            if (s5 > 0)
            {
                cout << s5;
            }
            cout << endl;
        }
    }
    return 0;
}
