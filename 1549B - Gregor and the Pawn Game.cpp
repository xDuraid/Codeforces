#include <iostream>
#include <string>
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
    int n = 0, ans = 0;
    string s, d;
    cin >> n;
    cin >> s >> d;
    for(int i = 0; i < n; i++){
        if(s[i] == '0' && d[i] == '1'){
            ans++;
            s[i] = 'x';
            d[i] = 'x';
        }
        else if(s[i] == '1'){
            if(i > 0 && d[i - 1] == '1'){
                ans++;
                s[i] = 'x';
                d[i - 1] = 'x';
            }
            else if(i < n - 1 && d[i + 1] == '1'){
                ans++;
                s[i] = 'x';
                d[i + 1] = 'x';
            }
        }
    }
    cout << ans << "\n";
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

