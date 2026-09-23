#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(pair<int,char> a,pair<int ,char> b)
{
    if(a.first!=b.first)
    {
        return a.first >b.first;
    }
    return a.second < b.second;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    vector<pair<int,char>> vec;
    
    char c,letter=0,b;
    
    int n,i,j,arr[26]={0},m;
    
    cin >> n;
    
    while(cin.get(c))
    {
        if(c>='A'&&c<='Z')
        {
            arr[c-'A']++;
        }
        else if(c>='a'&&c<='z')
        {
            arr[c-'a']++;
        }
    }
    for(i=0;i<26;i++)
    {
        if(arr[i]!=0)
        {
            vec.push_back({arr[i],char(i+'A')});
        }
    }
    sort(vec.begin(),vec.end(),cmp);
    
    for(auto p:vec)
    {
        cout << p.second << " " << p.first << endl;
    }
    
    return 0;
}
