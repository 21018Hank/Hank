#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, a, b, i, temp, sum = 0, j;

    cin >> n;

    for (j = 1;j <= n;j++)
    {
        cin >> a >> b;
        sum = 0;
        if (a % 2 == 0)
        {
            if (b % 2 == 0)
            {
                for (i = a + 1;i <= b - 1;i = i + 2)
                {
                    temp = i;
                    sum = sum + temp;
                }
                cout << "Case " << j << ": " << sum << endl;
            }
            else
            {
                for (i = a + 1;i <= b;i = i + 2)
                {
                    temp = i;
                    sum = sum + temp;
                }
                cout << "Case " << j << ": " << sum << endl;
            }
        }
        else
        {
            if (b % 2 == 0)
            {
                for (i = a;i <= b - 1;i = i + 2)
                {
                    temp = i;
                    sum = sum + temp;
                }
                cout << "Case " << j << ": " << sum << endl;
            }
            else
            {
                for (i = a;i <= b;i = i + 2)
                {
                    temp = i;
                    sum = sum + temp;
                }
                cout << "Case " << j << ": " << sum << endl;
            }
        }
    }

    return 0;
}
