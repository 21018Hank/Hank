#include <iostream>
#include <vector>
using namespace std;

long long step(long long sum)
{
    long long s = 0;
    for (long long i = 1;i <= sum;i++)
    {
        s += i + 1;
    }
    return s;
}
int main()
{
    long long x1, y1, x2, y2;
    long long n;
    cin >> n;
    for (long long i = 0;i < n;i++) 
    {
        long long step1 = 0, step2 = 0;
        long long sum1, sum2;
        cin >> x1 >> y1 >> x2 >> y2;

        if (x1 == x2 && y1 == y2)
        {
            cout << "Case " << i + 1 << ": 0" << endl;
        }
        else
        {
            sum1 = x1 + y1;
            sum2 = x2 + y2;
            step1 = step(sum1);
            step2 = step(sum2);

            step1 = step1 - (sum1 - x1);
            step2 = step2 - (sum2 - x2);

            cout << "Case " << i + 1 << ": " << step2 - step1 << endl;
        }
    }
    return 0;
}
