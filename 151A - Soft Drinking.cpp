#include <iostream>

using namespace std;

#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define TEST int t = 0; cin >> t; while(t--)



int main()
{
    IOS
    int n = 0, k = 0, l = 0, c = 0, d = 0, p = 0, nl = 0, np = 0, ans = 0;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    k *= l;
    c *= d;
    ans = (min(k / nl, min(c, p / np))) / n;
    cout << ans;

    return 0;
}
