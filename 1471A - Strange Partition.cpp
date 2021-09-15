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
        ll n = 0, a = 0, x = 0, mx = 0, mn = 0, sum = 0;
        cin >> n >> x;
        for(int i = 0; i < n; i++){
            cin >> a;
            mx += (a + x - 1) / x;
            sum += a;
        }
        mn = (sum + x - 1) / x;
        cout << mn << " " << mx << endl;
    }
    return 0;
}
