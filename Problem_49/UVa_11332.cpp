#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long sum,b,i;
    string a;

    while (cin >> a)
    {
        if (a == "0")
        {
            break;
        }
        
        for (;;)
        {
            int lena = 0;
            sum = 0;
            lena = a.length();
            for (i = 0;i < lena;i++)
            {
                b = a[i] - '0';
                sum = sum + b;
            }
            if (0 < sum && sum < 10)
            {
                cout << sum << endl;
                break;
            }
            else
            {
                a = "";
                a = to_string(sum);
            }
        }    
    }
    return 0;
}
