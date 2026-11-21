#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    char c;
    int n;
    cin >> n;
    cin.ignore();
    string s;
    vector<int>con(10, 0);
    vector<int>vec(10, 0);
    for (int i = 0;i < n;i++)
    {
        vec.assign(10, 0);
        con.assign(10, 0);
        getline(cin, s);
        for (int j = 0;j < s.length();j++)
        {
            if (s[j] == 'c')//1,2,3,6,7,8,9
            {
                if (con[1] == 0)
                {
                    vec[1]++;
                    con[1] = 1;
                }
                if (con[2] == 0)
                {
                    vec[2]++;
                    con[2] = 1;
                }
                if (con[3] == 0)
                {
                    vec[3]++;
                    con[3] = 1;
                }
                if (con[6] == 0)
                {
                    vec[6]++;
                    con[6] = 1;
                }
                if (con[7] == 0)
                {
                    vec[7]++;
                    con[7] = 1;
                }
                if (con[8] == 0)
                {
                    vec[8]++;
                    con[8] = 1;
                }
                if (con[9] == 0)
                {
                    vec[9]++;
                    con[9] = 1;
                }
                con[0] = 0;
                con[4] = 0;
                con[5] = 0;
            }
            else if (s[j] == 'd')//1,2,3,6,7,8
            {
                if (con[1] == 0)
                {
                    vec[1]++;
                    con[1] = 1;
                }
                if (con[2] == 0)
                {
                    vec[2]++;
                    con[2] = 1;
                }
                if (con[3] == 0)
                {
                    vec[3]++;
                    con[3] = 1;
                }
                if (con[6] == 0)
                {
                    vec[6]++;
                    con[6] = 1;
                }
                if (con[7] == 0)
                {
                    vec[7]++;
                    con[7] = 1;
                }
                if (con[8] == 0)
                {
                    vec[8]++;
                    con[8] = 1;
                }
                con[0] = 0;
                con[4] = 0;
                con[5] = 0;
                con[9] = 0;
            }
            else if (s[j] == 'e')//1,2,3,6,7
            {
                if (con[1] == 0)
                {
                    vec[1]++;
                    con[1] = 1;
                }
                if (con[2] == 0)
                {
                    vec[2]++;
                    con[2] = 1;
                }
                if (con[3] == 0)
                {
                    vec[3]++;
                    con[3] = 1;
                }
                if (con[6] == 0)
                {
                    vec[6]++;
                    con[6] = 1;
                }
                if (con[7] == 0)
                {
                    vec[7]++;
                    con[7] = 1;
                }
                con[0] = 0;
                con[4] = 0;
                con[5] = 0;
                con[8] = 0;
                con[9] = 0;
            }
            else if (s[j] == 'f')//1,2,3,6
            {
                if (con[1] == 0)
                {
                    vec[1]++;
                    con[1] = 1;
                }
                if (con[2] == 0)
                {
                    vec[2]++;
                    con[2] = 1;
                }
                if (con[3] == 0)
                {
                    vec[3]++;
                    con[3] = 1;
                }
                if (con[6] == 0)
                {
                    vec[6]++;
                    con[6] = 1;
                }
                con[0] = 0;con[4] = 0;con[5] = 0;con[7] = 0;con[8] = 0;con[9] = 0;
            }
            else if (s[j] == 'g')//1,2,3
            {
                if (con[1] == 0)
                {
                    vec[1]++;
                    con[1] = 1;
                }
                if (con[2] == 0)
                {
                    vec[2]++;
                    con[2] = 1;
                }
                if (con[3] == 0)
                {
                    vec[3]++;
                    con[3] = 1;
                }
                con[0] = 0;con[4] = 0;con[5] = 0;con[6] = 0;con[7] = 0;con[8] = 0;con[9] = 0;
            }
            else if (s[j] == 'a')//1,2
            {
                if (con[1] == 0)
                {
                    vec[1]++;
                    con[1] = 1;
                }
                if (con[2] == 0)
                {
                    vec[2]++;
                    con[2] = 1;
                }
                con[0] = 0;con[3] = 0;con[4] = 0;con[5] = 0;con[6] = 0;con[7] = 0;con[8] = 0;con[9] = 0;
            }
            else if (s[j] == 'b')//1
            {
                if (con[1] == 0)
                {
                    vec[1]++;
                    con[1] = 1;
                }
                con[0] = 0; con[2] = 0;con[3] = 0;con[4] = 0;con[5] = 0;con[6] = 0;con[7] = 0;con[8] = 0;con[9] = 0;
            }
            else if (s[j] == 'C')//2
            {
                if (con[2] == 0)
                {
                    vec[2]++;
                    con[2] = 1;
                }
                con[0] = 0;con[1] = 0;con[3] = 0; con[4] = 0;con[5] = 0;con[6] = 0;con[7] = 0;con[8] = 0;con[9] = 0;
            }
            else if (s[j] == 'D')//0,1,2,3,6,7,8
            {
                if (con[0] == 0)
                {
                    vec[0]++;con[0] = 1;
                }
                if (con[1] == 0)
                {
                    vec[1]++;con[1] = 1;
                }
                if (con[2] == 0)
                {
                    vec[2]++;con[2] = 1;
                }
                if (con[3] == 0)
                {
                    vec[3]++;con[3] = 1;
                }
                if (con[6] == 0)
                {
                    vec[6]++;con[6] = 1;
                }
                if (con[7] == 0)
                {
                    vec[7]++;con[7] = 1;
                }
                if (con[8] == 0)
                {
                    vec[8]++;con[8] = 1;
                }
                con[4] = 0;con[5] = 0;con[9] = 0;
            }
            else if (s[j] == 'E')//0,1,2,3,6,7
            {
                if (con[0] == 0)
                {
                    vec[0]++;con[0] = 1;
                }
                if (con[1] == 0)
                {
                    vec[1]++;con[1] = 1;
                }
                if (con[2] == 0)
                {
                    vec[2]++;con[2] = 1;
                }
                if (con[3] == 0)
                {
                    vec[3]++;con[3] = 1;
                }
                if (con[6] == 0)
                {
                    vec[6]++;con[6] = 1;
                }
                if (con[7] == 0)
                {
                    vec[7]++;con[7] = 1;
                }
                con[4] = 0;con[5] = 0;con[8] = 0;con[9] = 0;
            }
            else if (s[j] == 'F')//0,1,2,3,6
            {
                if (con[0] == 0)
                {
                    vec[0]++;con[0] = 1;
                }
                if (con[1] == 0)
                {
                    vec[1]++;con[1] = 1;
                }
                if (con[2] == 0)
                {
                    vec[2]++;con[2] = 1;
                }
                if (con[3] == 0)
                {
                    vec[3]++;con[3] = 1;
                }
                if (con[6] == 0)
                {
                    vec[6]++;con[6] = 1;
                }
                con[4] = 0;con[5] = 0;con[7] = 0;con[8] = 0;con[9] = 0;
            }
            else if (s[j] == 'G')//0,1,2,3
            {
                if (con[0] == 0)
                {
                    vec[0]++;con[0] = 1;
                }
                if (con[1] == 0)
                {
                    vec[1]++;con[1] = 1;
                }
                if (con[2] == 0)
                {
                    vec[2]++;con[2] = 1;
                }
                if (con[3] == 0)
                {
                    vec[3]++;con[3] = 1;
                }
                con[4] = 0;con[5] = 0;con[6] = 0;con[7] = 0;con[8] = 0;con[9] = 0;
            }
            else if (s[j] == 'A')//0,1,2
            {
                if (con[0] == 0)
                {
                    vec[0]++;
                    con[0] = 1;
                }
                if (con[1] == 0)
                {
                    vec[1]++;
                    con[1] = 1;
                }
                if (con[2] == 0)
                {
                    vec[2]++;
                    con[2] = 1;
                }
                con[3] = 0;con[4] = 0;con[5] = 0;con[6] = 0; con[7] = 0;con[8] = 0;con[9] = 0;
            }
            else if (s[j] == 'B')//0,1
            {
                if (con[0] == 0)
                {
                    vec[0]++;
                    con[0] = 1;
                }
                if (con[1] == 0)
                {
                    vec[1]++;
                    con[1] = 1;
                }
                con[2] = 0;con[3] = 0;con[4] = 0;con[5] = 0;con[6] = 0;con[7] = 0;con[8] = 0;con[9] = 0;
            }
        }
        for (int j=0;j<vec.size();j++)
        {
            cout << vec[j];
            if (j != 9)
            {
                cout << " ";
            }
            else
            {
                cout << endl;
            }
        }
    }
    return 0;
}
