#include <iostream>
using namespace std;

int main()
{
    int m, n, q;
    int num;
    cin >> num;
    for (int k = 0;k < num;k++)
    {
        cin >> m >> n >> q;
        char mn[105][105] = {};
        int q1, q2;
        int left = 1, right = 1, above = 1, under = 1;
        cout << m << " " << n << " " << q << endl;        
        for (int i = 0;i < m;i++)
        {
            for (int j = 0;j < n;j++)
            {
                cin >> mn[i][j];
            }
        }
        for (int i = 0;i < q;i++)
        {
            cin >> q1 >> q2;
            int judge = 0;
            char now = mn[q1][q2];
            int j = 1;
            for (;;)
            {
                int start1 = q1 - j;
                int start2 = q2 - j;
                if (q1 - j < 0 || q2 - j < 0 || q1 + j >= m || q2 + j >= n)
                {
                    break;
                }
                for (int l = start1;l <= start1 + 2 * j;l++)
                {
                    for (int o = start2;o <= start2 + 2 * j;o++)
                    {
                        if (mn[l][o] != now)
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
                if (judge == 1)
                {
                    break;
                }
                j++;
            }
            cout << 2*(j-1) + 1 << endl;
        }
    }
    return 0;
}
