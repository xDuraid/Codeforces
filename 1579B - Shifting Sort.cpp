#include <iostream>
#include <vector>
#include <tuple>
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
    int n = 0;
    cin >> n;
    vector<tuple<int,int,int>> ans;
    vector<int> a(n), b(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b.begin(), b.end());
    for(int i = n - 1; i >= 0; i--){
        int r = i, l = i;
        for(int j = 0; j < n; j++){
            if(a[j] == b[i]){
                l = j;
                break;
            }
        }
        if(r > l){
            ans.push_back({l + 1, r + 1, 1});
            for(int k = l; k < r; k++){
                swap(a[k], a[k + 1]);
            }
        }
    }
    cout << ans.sz << "\n";
    for(int i = 0; i < ans.sz; i++){
        int l = get<0>(ans[i]);
        int r = get<1>(ans[i]);
        int d = get<2>(ans[i]);
        cout << l << " " << r << " " << d << "\n";
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

