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
        ll n = 0, A = 0, B = 0, mx = 0;
        cin >> A >> B >> n;
        ll a[n] = {0}, b[n] = {0};
        for(int i = 0; i < n; i++){
            cin >> a[i];
            mx = max(a[i], mx);
        }
        for(int i = 0; i < n; i++){
            cin >> b[i];
        }
        for(int i = 0; i < n; i++){
            ll t = (b[i] + A - 1) / A;
            B -= t * a[i];
        }
        B += mx;
        cout << (B > 0 ? "YES" : "NO") << endl;
    }
    return 0;
}
