#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b;
    int n;
    while (cin >> a >> b)
    {
        if (a == 0 && b == 0)
        {
            break;
        }
        n = 0;
        for (double i = a;i <= b;i++)
        {
            if (sqrt(i) == (long long int)sqrt(i))
            {
                n++;
            }
        }
        cout << n << endl;
    }
    
    return 0;
}
