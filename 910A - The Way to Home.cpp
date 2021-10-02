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
    int n = 0, k = 0, ans = 0;
    cin >> n >> k;
    string s;
    cin >> s;
    int i = 0;
    while(i < n - 1){
        int j = min(n - 1, i + k);
        bool flag = 1;
        for(j; j > i; j--){
            if(s[j] == '1'){
                ans++;
                flag = 0;
                i = j;
                break;
            }
        }
        if(flag){
            ans = -1;
            break;
        }
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

