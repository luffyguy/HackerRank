#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main()
{
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    int j;
    cin >> j;
    double e;
    cin >> e;
    string t;
    cin.get();
    getline(cin, t);

    cout << i + j << endl;
    cout << fixed << setprecision(1) << d + e << endl;
    cout << s + t << endl;

    return 0;
}