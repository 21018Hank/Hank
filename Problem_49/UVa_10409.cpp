#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, top, north, south, east, west, bottom, temp;
    string s;
    while (cin >> n && n != 0)
    {
        top = 1;
        bottom = 6;
        north = 2;
        west = 3;
        south = 5;
        east = 4;
        
        for (int i = 0;i < n;i++)
        {
            cin >> s;

            if (s == "north")
            {
                temp = top;
                top = south;
                south = bottom;
                bottom = north;
                north = temp;
            }
            else if (s == "south")
            {
                temp = top;
                top = north;
                north = bottom;
                bottom = south;
                south = temp;
            }
            else if (s == "west")
            {
                temp = top;
                top = east;
                east = bottom;
                bottom = west;
                west = temp;
            }
            else if (s == "east")
            {
                temp = top;
                top = west;
                west = bottom;
                bottom = east;
                east = temp;
            }
        }
        cout << top << endl;
    }
    return 0;
}
