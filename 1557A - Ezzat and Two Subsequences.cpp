#include <iostream>
#include <iomanip>
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
    cout << fixed << setprecision(10);
    ll n = 0, x = 0, mx = -1e9 + 7, sum = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x;
        sum += x;
        mx = max(x, mx);
    }
    sum -= mx;
    double ans =  1.0 * sum / (n - 1) + mx;
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

