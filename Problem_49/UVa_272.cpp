#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    char c;
    int t=0;
    
    while (cin.get(c))
    {
        if((c=='"')&&(t==0))
        {
            cout << "``";
            t=1;
        }
        else if((c=='"')&&(t==1))
        {
            cout << "''";
            t=0;
        }
        else if (c != '\r')
        {
            cout << c;
        }
    }
    return 0;
}
