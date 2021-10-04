#include <iostream>
#include <vector>

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

vector<vector<int>> adj(2001);

int DFS(int r)
{
    int d = 0;
    for(int i = 0; i < adj[r].sz; i++){
        d = max(d, DFS(adj[r][i]));
    }
    return d + 1;
}

void solve()
{
    int n = 0, x = 0, ans = 0;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> x;
        if(x != -1){
            adj[i].pb(x);
        }
    }
    for(int i = 1; i <= n; i++){
        ans = max(ans, DFS(i));
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

