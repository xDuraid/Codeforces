#include <iostream>
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
    int a = 0, b = 0, c = 0, r = 0, ans = 0;
    cin >> a >> b >> c >> r;
    if(a > b)
        swap(a, b);
    int L = c - r, R = c + r;
    L = max(L, a);
    R = min(R, b);
    ans = b - a - max(R - L, 0);
    cout << ans << "\n";
    return;
}

int main()
{
    IOS
    TEST{
        solve();
    }
    return 0;
}
