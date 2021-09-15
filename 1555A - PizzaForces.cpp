#include <iostream>
using namespace std;

#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define TEST int t = 0; cin >> t; while(t--)
#define ll long long
#define sz size()
#define fi first
#define se second
int main()
{
    IOS
    TEST
    {
        ll n = 0, ans = 0;
        cin >> n;
        ans = max(15LL, (n + 1) / 2 * 5);
        cout << ans << endl;
    }
    return 0;
}
