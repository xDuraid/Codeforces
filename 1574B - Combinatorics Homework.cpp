#include <iostream>
#include <algorithm>
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
        ll a[3] = {0}, m = 0, l = 0, r = 0;
        cin >> a[0] >> a[1] >> a[2] >> m;
        sort(a, a + 3);
        l = a[2] - (a[1] + a[0] + 1);
        r = a[0] + a[1] + a[2] - 3;
        cout << (m >= l && m <= r ? "YES" : "NO") << endl;

    }
    return 0;
}
