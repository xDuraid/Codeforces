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
    int n = 0, l = 0, r = 0;
    cin >> n >> l >> r;
    int mn = ((1 << l) - 1) + (n - l);
    int mx = ((1 << r) - 1) + (n - r) * (1 << (r - 1));
    cout << mn << " " << mx;

    return 0;
}
