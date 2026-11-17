#include <iostream>
#include <string>
using namespace std;

int main()
{
    char ch;
    int judge = 0;
    while (cin.get(ch))
    {
        if (ch == '"' && judge == 0)
        {
            cout << "``";
            judge = 1;
        }
        else if (ch == '"' && judge == 1)
        {
            cout << "''";
            judge = 0;
        }
        else
        {
            cout << ch;
        }
    }
    return 0;
}
