#include <iostream>
#include <algorithm>
#include <vector>
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
    ll n = 0, x = 0, sum = 0;
    vector<ll> odds, evens;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x;
        sum += x;
        if(x % 2)
            odds.push_back(x);
        else
            evens.push_back(x);
    }
    sort(odds.rbegin(), odds.rend());
    sort(evens.rbegin(), evens.rend());
    int t = min(odds.sz, evens.sz);
    int i = 0;
    for(i ; i < t; i++){
        sum -= odds[i];
        sum -= evens[i];
    }
    if(i < odds.sz)
        sum -= odds[i];
    else
        sum -= evens[i];
    cout << sum;

    return;
}

int main()
{
    IOS
    solve();
    return 0;
}
