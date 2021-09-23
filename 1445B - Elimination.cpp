#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define TEST int tst = 0; cin >> tst; while(tst--)
#define ll long long
#define ln length()
#define sz size()
#define fi first
#define se second
#define IGNORE cin.ignore(numeric_limits<streamsize>::max(), '\n');

void solve()
{
    int a = 0, b = 0, c = 0, d = 0;
    cin >> a >> b >> c >> d;
    cout << max(a + b, c + d) << endl;
    return;
}

int main()
{
    IOS
    TEST
    {
        solve();
    }
    return 0;
}
