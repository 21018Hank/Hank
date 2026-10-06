#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    int i, n;

    while (cin >> n)
    {
        vector<int>vec(n,0);
        vec.resize(n, 0);

        int temp = 0, mid1, mid2,judge=0,inside;
        for (i = 0;i < n;i++)
        {
            cin >> vec[i];
        }
        sort(vec.begin(), vec.end());
        mid1 = vec[((n-1)/2)];
        mid2 = vec[n/2];
        cout << mid1 << " ";
        for (i = 0;i < n;i++)
        {
            if (vec[i] >= mid1 && vec[i] <= mid2)
            {
                judge++;
            }
        }
        cout << judge << " ";

        inside = mid2 - mid1 + 1;
        cout << inside << endl;
    }
    return 0;
}
