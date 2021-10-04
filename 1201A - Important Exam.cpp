#include <iostream>
#include <vector>
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
    int n = 0, m = 0, ans = 0, x = 0;
    cin >> n >> m;
    vector<vector<int>> a(m, vector<int>(5, 0));
    vector<int> p(m, 0);
    for(int i = 0; i < n; i++){
        char c;
        for(int j = 0; j < m; j++){
            cin >> c;
            a[j][c - 'A']++;
        }
    }
    for(int i = 0; i < m; i++)
        cin >> p[i];


    for(int i = 0; i < m; i++){
        int t = 0;
        for(int j = 0; j < 5; j++){
            t = max(t, a[i][j]);
        }
        ans += p[i] * t;
    }
    cout << ans;
    return;
}

int main()
{
    IOS
    solve();
    return 0;
}

