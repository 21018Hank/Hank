#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int r, i, j, arr[10000], sum, d,t;
    long long summin;
    cin >> t;
    while (t--)
    {
        cin >> r;
        
            d = 0;
            summin = 2000000000;
            sum = 0;
            for (i = 0;i < r;i++)
            {
                cin >> arr[i];
            }
            int max_arr = *max_element(arr, arr + r);
            int min_arr = *min_element(arr, arr + r);
            sort(arr, arr + r);

            int median = arr[r / 2];
                for (j = 0;j < r;j++)
                {
                    d = arr[j] - median;
                    sum = sum + abs(d);
                }
                if (sum < summin)
                {
                    summin = sum;
                }
                sum = 0;
            cout << summin << '\n';  
    }
    

    return 0;
}
