#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define TEST int tst = 0; cin >> tst; while(tst--)
#define ll long long
#define ln length()
#define fi first
#define se second
#define IGNORE cin.ignore(numeric_limits<streamsize>::max(), '\n');

void solve()
{
    int n = 0, ans = 0, x = 0, y = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x >> y;
        ans = max(ans, x + y);
    }
    cout << ans;
    return;
}

int main()
{
    IOS
    solve();
    return 0;
}
