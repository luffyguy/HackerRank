#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference
{
private:
    vector<int> elements;

public:
    int maximumDifference;

    Difference(vector<int> a)
    {
        elements = a;
    }
    int maxEle = -101;
    int minEle = 101;
    void computeDifference()
    {
        //logic 1
        for (int i = 0; i < elements.size(); i++)
        {
            maxEle = max(maxEle, elements[i]);
        }

        for (int i = 0; i < elements.size(); i++)
        {
            minEle = min(minEle, elements[i]);
        }
        maximumDifference = maxEle - minEle;

        //logic 2
        sort(elements.begin(), elements.end());
        maximumDifference = elements[elements.size() - 1] - elements[0];
    }
};

int main()
{
    int N;
    cin >> N;

    vector<int> a;

    for (int i = 0; i < N; i++)
    {
        int e;
        cin >> e;

        a.push_back(e);
    }

    Difference d(a);

    d.computeDifference();

    cout << d.maximumDifference;

    return 0;
}