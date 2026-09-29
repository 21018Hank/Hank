#include <iostream>
using namespace std;

int main()
{
    unsigned int a, b, i, l=1, lmax=1,temp;
    while (cin >> a >> b)
    {
        lmax = 1;
        if (a > b)
        {
            ios_base::sync_with_stdio(false); 
            cin.tie(NULL);
            for (temp = b;temp <= a;temp++)
            {
                i = temp;
                l = 1;
                for (;;)
                {
                    if (i == 1)
                    {
                        break;
                    }

                    if (i % 2 == 0)
                    {
                        i = i / 2;
                    }
                    else
                    {
                        i = 3 * i + 1;
                    }
                    l++;
                    
                }
                if (l > lmax)
                {
                    lmax = l;
                }
            }
        }
        else
        {
            for (temp = a;temp <= b;temp++)
            {
                i = temp;
                l = 1;
                for (;;)
                {
                    if (i == 1)
                    {
                        break;
                    }

                    if (i % 2 == 0)
                    {
                        i = i / 2;
                    }
                    else
                    {
                        i = (3 * i) + 1;
                    }
                    l++;
                    
                }
                if (l > lmax)
                {
                    lmax = l;
                }
            }
        }

        cout << a << " " << b << " " << lmax << endl;
    }  
}
