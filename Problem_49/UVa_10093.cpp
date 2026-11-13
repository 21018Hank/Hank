#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <functional>

using namespace std;

int main()
{
    int a,len,i,judge,sum;
    vector<unsigned int>vec;
    string s;

    while (getline(cin, s))
    {
        vector<int>sums;
        sums.clear();
        vec.clear();
        judge = 0;
        len = s.length();
        for (i = 0;i < len;i++)
        {
            if ((s[i] == '0' || s[i] == '1'))
            {
                a = (unsigned int)s[i] - 47;
                vec.push_back(2);
                sums.push_back(a - 1);
            }
            else if (s[i] >= '2' && s[i] <= '9')
            {
                a = (unsigned int)s[i] - 47;
                vec.push_back(a);
                sums.push_back(a - 1);
            }
            else if (s[i] >= 'A' && s[i] <= 'Z')
            {
                a = (unsigned int)s[i] - 54;
                vec.push_back(a);
                sums.push_back(a - 1);
            }
            else if (s[i] >= 'a' && s[i] <= 'z')
            {
                a = (unsigned int)s[i] - 60;
                vec.push_back(a);
                sums.push_back(a - 1);
            }
        }
        sum = 0;
        for (i = 0;i < sums.size();i++)
        {
            sum += sums[i];
        }
        sort(vec.begin(), vec.end(), greater<int>());
        if (vec.size() > 0)
        {
            for (i = vec[0];i <= 62;i++)
            {
                if (sum % (i-1) == 0)
                {
                    cout << i << endl;
                    judge = 1;
                    break;
                }
            }
            if (judge == 0)
            {
                cout << "such number is impossible!" << endl;
            }
        }
        else
        {
            cout << "such number is impossible!" << endl;
        }
    }
    return 0;
}
