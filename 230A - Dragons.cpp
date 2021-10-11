#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
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
    int s = 0, n = 0;
    cin >> s >> n;
    vector<pair<int,int>> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i].fi >> a[i].se;
    }
    sort(a.begin(), a.end(), [](pair<int,int> a, pair<int,int> b)
         {
            return a.fi < b.fi;
         });
    for(int i = 0; i < n; i++)
    {
        if(s > a[i].fi)
            s += a[i].se;
        else{
            cout << "NO";
            return;
        }
    }
    cout << "YES";
    return;
}

int main()
{
    IOS
    solve();
    return 0;
}
