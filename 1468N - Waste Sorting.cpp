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
    int c[3] = {0}, a[5] = {0};
    for(int i = 0; i < 3; i++)
        cin >> c[i];
    for(int i = 0; i < 5; i++)
        cin >> a[i];
    for(int i = 0; i < 3; i++){
        if(a[i] > c[i]){
            cout << "NO\n";
            return;
        }
        c[i] -= a[i];
    }
    a[3] -= min(c[0], a[3]);
    a[4] -= min(c[1], a[4]);
    c[2] -= a[3] + a[4];

    if(c[2] < 0)
        cout << "NO\n";
    else
        cout << "YES\n";
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
