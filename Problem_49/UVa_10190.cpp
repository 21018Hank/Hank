#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    long long a, b, len, i;
    while (cin >> a >> b)
    {
        vector<long long>vec;
        vec.clear();
        vec.push_back(a);
        if (b <= 1 || a==0)
        {
            cout << "Boring!" << endl;
        }
        else
        {
            for (;;)
            {
                if (a % b == 0)
                {
                    a = a / b;
                    vec.push_back(a);
                    len = vec.size();
                    if (a == 1)
                    {
                        for (i = 0;i < len;i++)
                        {
                            cout << vec[i];
                            if (i != len - 1)
                            {
                                cout << " ";
                            }
                        }
                        cout << endl;
                        break;
                    }
                }

                else
                {
                    cout << "Boring!" << endl;
                    break;
                }
            }
        }
           
    }
    return 0;
}

