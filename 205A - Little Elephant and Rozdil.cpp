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
    int n = 0, mn = INT_MAX, p = 0, x = 0;
    cin >> n;
    int a[n] = {0};
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] < mn){
            mn = a[i];
            p = i + 1;
        }
    }
    for(int i = 0; i < n; i++){
        x += (a[i] == mn);
    }
    if(x > 1)
        cout << "Still Rozdil\n";
    else
        cout << p;
    return;
}

int main()
{
    IOS
    solve();
    return 0;
}
