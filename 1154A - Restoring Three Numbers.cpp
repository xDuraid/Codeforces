#include <iostream>
#include <algorithm>
using namespace std;

#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define TEST int t = 0; cin >> t; while(t--)

int main()
{
    IOS
    long long a = 0, b = 0, c = 0;
    int g[4] = {0};
    cin >> g[0] >> g[1] >> g[2] >> g[3];
    sort(g, g + 4);
    a = g[3] - g[2];
    b = g[3] - g[1];
    c = g[3] - g[0];
    cout << a << " " << b << " " << c;
    return 0;
}
