#include <iostream>
#include <algorithm>
using namespace std;

#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define TEST int tst = 0; cin >> tst; while(tst--)
#define ll long long
#define ln length()
#define sz size()
#define pb push_back
#define fi first
#define se second
#define IGNORE cin.ignore(numeric_limits<streamsize>::max(), '\n');


void solve()
{
    int n = 0, a = 0, b = 0;
    ll ans = 0;
    string s;
    cin >> n >> a >> b;
    cin >> s;
    int seg = unique(s.begin(), s.end()) - s.begin();
    ans = 1LL * a * n + max(b * n, (seg / 2 + 1) * b);
    cout << ans << "\n";

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


