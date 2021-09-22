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
    int a[3], n;
    cin >> a[0] >> a[1] >> n;
    a[2] = a[0] ^ a[1];
    cout << a[n % 3] << "\n";
    return;
}

int main()
{
    IOS
    TEST
    {
        solve();
    }
    return 0;
}
