#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main()
{
    long long a,i;
    

    while (cin >> a&& a!=0)
    {
        vector<int>vec(0);
        int judge = 0;
        int len = 1;
        for (;;)
        {
            if (a % 2 == 1)
            {
                a = a / 2;
                vec.push_back(1);
                judge++;
                len++;
            }
            else
            {
                a = a / 2;
                vec.push_back(0);
                len++;
            }
            if (a == 0)
            {
                break;
            }
        }
        reverse(vec.begin(), vec.end());
        cout << "The parity of ";
        for (i = 0;i < len-1;i++)
        {
            cout << vec[i];
        }
        cout << " is " << judge << " (mod 2)." << endl;
    }
    
    return 0;
}
