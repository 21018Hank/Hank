#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    while(cin >> n)
    {
        int i,j,index, arr[10000] = { 0 }, arrc[10000] = { 0 }, d[10000] = { 0 },judge=0;
        for (i = 0;i < n;i++)
    {
        cin >> arr[i];
    }

    for (i = 0;i < n-1;i++)
    {
        if (arr[i] < arr[i + 1])
        {
            d[i] = arr[i + 1] - arr[i];
        }
        else
        {
            d[i] = arr[i] - arr[i + 1];
        }
    }
    for (i = 0;i < n;i++)
    {
        for (j = 0;j < n;j++)
        {
            if (d[j] == i)
            {
                arrc[i] = 1;
            }
        }
        
    }
    for (i = 1;i < n;i++)
    {
        if (arrc[i] != 1)
        {
            judge = 1;
            break;
        }
    }
    if (judge == 1)
    {
        cout << "Not jolly" << endl;
    }
    else 
    {
        cout << "Jolly" << endl;
    }
    }
    return 0;
}

