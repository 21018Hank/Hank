#include <iostream>
using namespace std;

int main()
{
    long long arr[105][105], t, n, i, j, k, judge;
    cin >> t;
    char c;
    for (i = 0;i < t;i++)
    {
        judge = 0;
        cin >> c >> c >> n;
        for (j = 0;j < n;j++)
        {
            for (k = 0;k < n;k++)
            {
                cin >> arr[j][k];
            }
        }
        for (j = 0;j < n;j++)
        {
            for (k = 0;k < n;k++)
            {
                if (arr[j][k] != arr[n - j - 1][n - k - 1])
                {
                    judge = 1;
                    break;
                }
                else if (arr[j][k] < 0)
                {
                    judge = 1;
                    break;
                }

            }
            if (judge == 1)
            {
                break;
            }
        }
        if (judge == 0)
        {
            cout << "Test #" << i + 1 << ": Symmetric." << endl;
        }
        else
        {
            cout << "Test #" << i + 1 << ": Non-symmetric." << endl;
        }
    }
    return 0;
}
