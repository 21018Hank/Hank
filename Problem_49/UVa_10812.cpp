#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    int s1, s2;
    cin >> n;
    for (int i = 0;i < n;i++)
    {
        cin >> s1 >> s2;
        int ans1, ans2;
        ans1 = (s1 + s2);
        ans2 = (s1 - s2);
        if (ans1 < 0 || ans2 < 0 || s1 < s2)
        {
            cout << "impossible" << endl;
        }
        else if (ans1 % 2 != 0 || ans2 % 2 != 0)
        {
            cout << "impossible" << endl;
        }
        else
        {
            cout << ans1/2 << " " << ans2/2 << endl;
        }
    }
    return 0;
}
