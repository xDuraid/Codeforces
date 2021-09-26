#include <iostream>
#include <algorithm>
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
    int n = 0, a1 = 0, b1= 0, a2 = 0, b2 = 0;
    cin >> a1 >> b1 >> a2 >> b2;
    if(b1 > a1)
        swap(a1, b1);
    if(b2 > a2)
        swap(a2, b2);
    if(a1 == a2 && b1 + b2 == a1){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
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
