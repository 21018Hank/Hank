#include <iostream>
using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        int i, x, a, j = 0;
        int arr[3005] = { 0 }, judge[3005] = { 0 };
        for (i = 0;i < n;i++)
        {
            cin >> arr[i];
        }
        for (i = 1;i < n;i++)
        {
            x = arr[i] - arr[i - 1];
            a = abs(x);
            if (a > 0 && a <= n)
            {
                judge[a]++;
            }
        }
        for (i = 1;i < n;i++)
        {
            if (judge[i] == 0)
            {
                cout << "Not jolly" << endl;
                j = 1;
                break;
            }
        }
        if (j == 0)
        {
            cout << "Jolly" << endl;
        }
    }
    return 0;
}
