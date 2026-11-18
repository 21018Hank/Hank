#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int gcd(int a,int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    int i, j;
    string s1, s2;
    vector<int>str1;
    vector<int>str2;
    for (i = 1;i <= n;i++)
    {
        int sum1 = 0;
        int sum2 = 0;
        str1.clear();
        str2.clear();
        int s;
        getline(cin, s1);
        getline(cin, s2);
        int len1 = s1.length();
        int len2 = s2.length();
        for (j = 0;j < len1;j++)
        {
            s = s1[j] - '0';
            str1.push_back(s);
        }
        for (j = 0;j < len2;j++)
        {
            s = s2[j] - '0';
            str2.push_back(s);
        }
        int x = 1;
        for (j = len1-1;j >=0;j--)
        {
            sum1 += (str1[j] * x);
            x *= 2;
        }
        x = 1;
        for (j = len2-1;j >=0;j--)
        {
            sum2 += (str2[j] * x);
            x *= 2;
        }
        int mins = min(sum1, sum2);
        int judge = 0;
        if (gcd(sum1,sum2)!=1)
        {
            judge = 1;
            cout << "Pair #" << i << ": ";
            cout << "All you need is love!" << endl;
        }
        else
        {
            cout << "Pair #" << i << ": ";
            cout << "Love is not all you need!" << endl;
        }  
    }
    return 0;
}
