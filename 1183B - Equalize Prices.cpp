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
        int n = 0, k = 0, mx = 0, mn = INT_MAX;
        cin >> n >> k;
        int x = 0;
        for(int i = 0; i < n; i++){
            cin >> x;
            mx = max(x, mx);
            mn = min(x, mn);
        }
        if(mx - mn > 2 * k)
            cout << -1 << endl;
        else
            cout << mn + k << endl;
    }
    return 0;
}
