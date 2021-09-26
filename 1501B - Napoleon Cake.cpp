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
    int n = 0, x = 0;
    cin >> n;
    int a[n] = {0}, ans[n] = {0};
    for(int i = 0; i < n; i++)
        cin >> a[i];
    for(int i = n - 1; i >= 0; i--){
        x = max(x, a[i]);
        if(x == 0){
            ans[i] = 0;
        }
        else{
            ans[i] = 1;
            x--;
        }
    }
    for(int i = 0; i < n; i++)
        cout << ans[i] << " ";
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
