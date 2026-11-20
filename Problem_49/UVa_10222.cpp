#include <iostream>
#include <string>
using namespace std;

int main()
{
    string wrongin = "23edc4rfv5tgb6yhn7ujm8ik,9ol.0p;/-['=]\\";
    string correct = "`1qaz2wsx3edc4rfv5tgb6yhn7ujm8ik,9ol0p[";
    string s;
    while (getline(cin, s))
    {
        for (int i = 0;i < s.length();i++)
        {
            if (wrongin.find(s[i]) != string::npos)
            {
                int temp = wrongin.find(s[i]);
                cout << correct[temp];
            }
            else
            {
                cout << s[i];
            }
        }
        cout << endl;
    }
    return 0;
}
