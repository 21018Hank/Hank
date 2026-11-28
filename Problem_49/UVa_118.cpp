#include <iostream>
#include <string>
using namespace std;

int main()
{
    char now, c;
    string command;
    int x, y;
    int d;
    int rangex, rangey;
    cin >> rangex >> rangey;
    bool scent[100][100] = {};

    while (cin >> x >> y >> now)
    {
        cin >> command;
        int judge = 0;
        for (int i=0;i<command.length();i++)
        {
            if (now == 'W')
            {
                if (command[i] == 'F')
                {
                    x = x - 1;
                    if (scent[x + 1][y] == true&&x<0)
                    {
                        x = x + 1;
                    }
                    if (x > rangex || x < 0)
                    {
                        cout << x + 1 << " " << y << " " << now << " LOST" << endl;
                        judge = 1;
                        scent[x + 1][y] = true;
                        break;
                    }
                }
                else if (command[i] == 'L')
                {
                    now = 'S';
                }
                else if (command[i] == 'R')
                {
                    now = 'N';
                }
            }
            else if (now == 'E')
            {
                if (command[i] == 'F')
                {
                    x = x + 1;
                    if (scent[x - 1][y] == true&&x>rangex)
                    {
                        x = x - 1;
                    }
                    if (x > rangex || x < 0)
                    {
                        cout << x - 1 << " " << y << " " << now << " LOST" << endl;
                        judge = 1;
                        scent[x - 1][y] = true;
                        break;
                    }
                }
                else if (command[i] == 'L')
                {
                    now = 'N';
                }
                else if (command[i] == 'R')
                {
                    now = 'S';
                }
            }
            else if (now == 'N')
            {
                if (command[i] == 'F')
                {
                    y = y + 1;
                    if (scent[x][y - 1] == true&&y>rangey)
                    {
                        y = y - 1;
                    }
                    if (y > rangey || y < 0)
                    {
                        cout << x << " " << y - 1 << " " << now << " LOST" << endl;
                        judge = 1;
                        scent[x][y - 1] = true;
                        break;
                    }
                }
                else if (command[i] == 'L')
                {
                    now = 'W';
                }
                else if (command[i] == 'R')
                {
                    now = 'E';
                }
            }
            else if (now == 'S')
            {
                if (command[i] == 'F')
                {
                    y = y - 1;
                    if (scent[x][y + 1] == true&&y<0)
                    {
                        y = y + 1;
                    }
                    if (y > rangey || y < 0)
                    {
                        cout << x << " " << y + 1 << " " << now << " LOST" << endl;
                        judge = 1;
                        scent[x][y + 1] = true;
                        break;
                    }
                }
                else if (command[i] == 'L')
                {
                    now = 'E';
                }
                else if (command[i] == 'R')
                {
                    now = 'W';
                }
            }
        }
        if (judge == 0)
        {
            cout << x << " " << y << " " << now << endl;
        }
    }
    return 0;
}
