#include <iostream>
#include <string>
using namespace std;

int main()
{
    string num;
    int i;
    long long even, odd;
    int ans,a;
    while (cin >> num&&num!="0")
    {
        even = 0;
        odd = 0;
        for (i = 0;i < num.length();i += 2)
        {
            odd += (num[i]-'0');
        }
        for (i = 1;i < num.length();i += 2)
        {
            even += (num[i]-'0');
        }
        a = odd - even;
        ans = abs(a);
        if (ans % 11 == 0) 
        {
            cout << num << " is a multiple of 11." << endl;
        }
        else
        {
            cout << num << " is not a multiple of 11." << endl;
        }
    }
    
    return 0;
}
