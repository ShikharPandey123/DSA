#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 4;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= i + 1; j++)
        {
            cout << j;
        }
        for (int j = 0; j < 2 * (n - i - 1); j++)
        {
            cout << " ";
        }
        for (int j = i+1; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}