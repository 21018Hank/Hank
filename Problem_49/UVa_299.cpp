#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int arr[100], n, l, i, j,temp,sw,k;
    cin >> n;
    for (i = 0;i < n;i++)
    {
        cin >> l;
        sw = 0;
        for (j = 1;j <= l;j++)
        {
            cin >> arr[j];
        }
        for (k = l;k >= 2;k--)
        {
            for (j = l;j >= 2;j--)
            {
                if (arr[j - 1] > arr[j])
                {
                    temp = arr[j];
                    arr[j] = arr[j - 1];
                    arr[j - 1] = temp;
                    sw++;
                }
            }
        }
        cout << "Optimal train swapping takes " << sw << " swaps." << endl;
    }

    return 0;
}
