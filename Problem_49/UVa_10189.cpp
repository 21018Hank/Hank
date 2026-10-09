#include <iostream>
using namespace std;

int main()
{
    int a, b, i, j, n = 0;

    while (cin >> a >> b && a!=0 && b!=0)
    {

        char ch[101][101] = { '0' };
        int arr[101][101] = { 0 };
        n++;
        if (n != 1)
        {
            cout << '\n';
        }
        
        for (i = 1;i <= a;i++)
        {
            for (j = 1;j <= b;j++)
            {
                cin >> ch[i][j];
            }
        }
        cout << "Field #" << n << ":" << endl;
        for (i = 1;i <= a;i++)
        {
            for (j = 1;j <= b;j++)
            {
                if (ch[i][j] == '*')
                {
                    arr[i][j] = -1;
                }
                else
                {
                    arr[i][j] = 0;
                }
            }
        }

        for (i = 1;i <= a;i++)
        {
            for (j = 1;j <= b;j++)
            {
                if (arr[i][j] == 0)
                {
                    if (arr[i - 1][j - 1] == -1)
                    {
                        arr[i][j]++;
                    }
                    if (arr[i - 1][j] == -1)
                    {
                        arr[i][j]++;
                    }
                    if (arr[i - 1][j + 1] == -1)
                    {
                        arr[i][j]++;
                    }
                    if (arr[i][j - 1] == -1)
                    {
                        arr[i][j]++;
                    }
                    if (arr[i][j + 1] == -1)
                    {
                        arr[i][j]++;
                    }
                    if (arr[i + 1][j - 1] == -1)
                    {
                        arr[i][j]++;
                    }
                    if (arr[i + 1][j] == -1)
                    {
                        arr[i][j]++;
                    }
                    if (arr[i + 1][j + 1] == -1)
                    {
                        arr[i][j]++;
                    }
                }
            }
        }

        for (i = 1;i <= a;i++)
        {
            for (j = 1;j <= b;j++)
            {
                if (arr[i][j]== -1)
                {
                    cout << "*";
                }
                else
                {
                    cout << arr[i][j];
                }
            }
            cout << '\n';
        }
    }
    return 0;
}
