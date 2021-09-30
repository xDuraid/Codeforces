#include <iostream>
using namespace std;

#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define TEST int tst = 0; cin >> tst; while(tst--)
#define ll long long
#define ln length()
#define sz size()
#define fi first
#define se second
#define IGNORE cin.ignore(numeric_limits<streamsize>::max(), '\n');


void solve()
{
    ll a = 0, b = 0, da = 0, db = 0;
    cin >> da >> db;
    if(da == db){
        a = da * 10;
        b = db * 10 + 1;
    }
    else if(db - da == 1 || da == 9 && db == 1){
        a = db * 10 - 1;
        b = db * 10;
    }
    else{
        cout << -1;
        return;
    }
    cout << a << " " << b;
    return;
}

int main()
{
    IOS
    solve();
    return 0;
}

