#include <iostream>
using namespace std;

#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define TEST int tst = 0; cin >> tst; while(tst--)
#define ll long long
#define ln length()
#define sz size()
#define pb push_back
#define fi first
#define se second
#define IGNORE cin.ignore(numeric_limits<streamsize>::max(), '\n');


void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << max(max(a + b + c, a * b * c), max((a + b) * c, a * (b + c)));
    return;
}

int main()
{
    IOS
    solve();
    return 0;
}
