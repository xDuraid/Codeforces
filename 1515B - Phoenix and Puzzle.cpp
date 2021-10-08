#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <map>
#include <math.h>
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
    ll n = 0;
    cin >> n;
    ll x = n / 2, y = n / 4;
    ll sx = sqrt(x), sy = sqrt(y);
    if((sx * sx == x && n % 2 == 0) || (sy * sy == y && n % 4 == 0)){
        cout << "YES";
    }
    else
        cout << "NO";
    cout << "\n";
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
