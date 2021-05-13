#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{

    int n;
    cin >> n;
    map<string, int> name;
    string s;
    ll a;
    for (int i = 0; i < n; i++)
    {
        cin >> s >> a;
        name[s] = a;
    }
    while (cin >> s)
    {
        if (name.find(s) != name.end())
        {
            cout << s << "=" << name.find(s)->second << endl;
        }
        else
        {
            cout << "Not found" << endl;
        }
    }
    return 0;
}
