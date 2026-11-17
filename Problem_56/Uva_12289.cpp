#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1;
    int n,i,one,two;
    cin >> n;
    for (i = 0;i < n;i++)
    {
        one = 0;
        two = 0;
        cin >> s1;
        if (s1.length() == 5)
        {
            cout << "3" << endl;
        }
        else
        {
            if (s1[0] == 'o')
            {
                one++;
            }
            if (s1[1] == 'n')
            {
                one++;
            }
            if (s1[2] == 'e')
            {
                one++;
            }
            if (s1[0] == 't')
            {
                two++;
            }
            if (s1[1] == 'w')
            {
                two++;
            }
            if (s1[2] == 'o')
            {
                two++;
            }
            if (one > two)
            {
                cout << "1" << endl;
            }
            else
            {
                cout << "2" << endl;
            }
        }

    }
    return 0;
}
