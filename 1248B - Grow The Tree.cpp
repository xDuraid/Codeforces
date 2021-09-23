#include <iostream>
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
    ll n = 0, vsum = 0, hsum = 0, ans = 0;
    cin >> n;
    ll a[n] = {0};
    for(int i = 0; i < n; i++){
        cin >> a[i];
        hsum += a[i];
    }
    sort(a, a + n);
    for(int i = 0; i < n / 2; i++){
        vsum += a[i];
    }
    hsum -= vsum;
    ans = vsum * vsum + hsum * hsum;
    cout << ans << endl;
    return;
}

int main()
{
    IOS
    solve();
    return 0;
}
