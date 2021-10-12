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
    int n = 0, t = 0;
    cin >> n >> t;
    int a[n] = {0};
    for(int i = 1; i < n; i++)
    {
        cin >> a[i];
    }
    int curr = 1;
    while(curr < t)
    {
        curr = a[curr] + curr;
    }
    cout << (curr == t ? "YES" : "NO");
    return;
}

int main()
{
    IOS
    solve();
    return 0;
}
