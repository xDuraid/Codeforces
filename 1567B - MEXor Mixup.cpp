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
    int a = 0, b = 0, ans = 0, x = 0, t = 0;
    cin >> a >> b;
    t = a - 1;
    if(t % 4 == 0) x = t;
    else if(t % 4 == 1) x = 1;
    else if(t % 4 == 2) x = t + 1;
    else t = 0;

    if(x == b)
        ans = a ;
    else if((x ^ b) == a)
        ans = a + 2;
    else
        ans = a + 1;

    cout << ans << "\n";
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

