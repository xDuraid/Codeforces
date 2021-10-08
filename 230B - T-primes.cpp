#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <map>
#include <math.h>
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

int n = 1e6 + 2;
vector<bool> p(n, 1);
void seive()
{
    p[0] = 0;
    p[1] = 0;
    for(int i = 2; i * i <= n; i++){
        if(p[i]){
            for(int j = i * i; j <= n; j += i){
                p[j] = 0;
            }
        }
    }
    return;
}

void solve()
{
    ll n = 0, x = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x;
        ll t = sqrt(x);
        cout << ((t * t == x && p[t]) ? "YES\n" : "NO\n");
    }
    return;
}

int main()
{
    IOS
    seive();
    solve();
    return 0;
}
