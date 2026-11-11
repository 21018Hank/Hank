#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    int n,day,po,i,j,x,k,sum;
    vector<int>pos;
    cin >> n;
    for (i = 0;i < n;i++)
    {
        pos.clear();
        sum = 0;
        cin >> day;
        cin >> po;
        for (j = 0;j < po;j++)
        {
            cin >> x;
            pos.push_back(x);
        }
        vector<int>days(day, 0);
        for (j = 0;j < po;j++)
        {
            for (k = pos[j];k <= day;k+=pos[j])
            {
                days[k-1] = 1;
            }
        }
        for (j = 5;j < day;j+=7)
        {
            days[j] = 0;
        }
        for (j = 6;j < day;j += 7)
        {
            days[j] = 0;
        }
        for (j = 0;j < day;j++)
        {
            if (days[j] == 1)
            {
                sum++;
            }
        }
        cout << sum << endl;
    }
    return 0;
}
