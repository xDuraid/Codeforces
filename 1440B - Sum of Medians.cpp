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
        ll n = 0, k = 0, ans = 0, t = 0;
        cin >> n >> k;
        ll a[n * k] = {0};
        for(int i = 0; i < n * k; i++){
            cin >> a[i];
        }
        t = n - (((n + 1) / 2) - 1);
        for(int i = (n * k) - t; i >= 0; i -= t){
            ans += a[i];
            k--;
            if(k == 0)
                break;
        }
        cout << ans << endl;
    }
    return 0;
}
