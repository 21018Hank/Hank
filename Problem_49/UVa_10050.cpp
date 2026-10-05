#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, day, i, j, k, partynum, party[200],lostday,judge,final;

    cin >> n;
    
    
    
    for (i = 0;i < n;i++)
    {
        cin >> day;
        cin >> partynum;
        vector<bool>visit(day + 1, false);
        vector<int>days(day+1, 0);
        visit.resize(day + 1, false);
        lostday = 0;
        judge = 0;
        final = 0;
        for (j = 0;j <= day;j++)
        {
            days[j] = j;
        }

        for (j = 0;j < partynum;j++)
        {
            cin >> party[j];
        }
        for (j = 0;j < partynum;j++)
        {
            for (k = 0;k <= day;k++)
            {
                if (days[k] % party[j] == 0)
                {
                    visit[k] = true;
                }
            }
        }
        for (j = 1;j <= day;j++)
        {
            if ((days[j] % 7 == 0 || days[j] % 7 == 6) && (visit[j]==true))
            {
                lostday++;
            }
        }
        for (j = 1;j <= day;j++)
        {
            if (visit[j] == true)
            {
                judge++;
            }
        }
        final = judge - lostday;
        cout << final << endl;
    }
    return 0;
}
