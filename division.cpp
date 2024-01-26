#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    while (true)
    {
        cin >> a >> b;
        int result = b / a;
        int remainng = b % a;
        cout << result << endl;
        cout << remainng << endl;
    }
    return 0;
}