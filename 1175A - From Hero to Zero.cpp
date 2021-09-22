#include <iostream>

using namespace std;

#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define TEST int tst = 0; cin >> tst; while(tst--)
#define ll long long
#define ln length()
#define fi first
#define se second
#define IGNORE cin.ignore(numeric_limits<streamsize>::max(), '\n');


int main()
{
    IOS
    TEST
    {
        ll n = 0, k = 0, ans = 0;
        cin >> n >> k;
        while(n){
            ll r = n % k;
            if(r){
                ans += r;
                n -= r;
            }
            else{
                ans += 1;
                n /= k;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
