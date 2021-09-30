#include <bits/stdc++.h>
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
    vector<int> a(n);
    deque<int> ans;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    ans.push_front(a[0]);
    for(int i = 1; i < n; i++){
        if(a[i] < ans.front()){
            ans.push_front(a[i]);
        }
        else{
            ans.push_back(a[i]);
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

