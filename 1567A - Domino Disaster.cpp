#include <iostream>

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
    char s[n + 1], ans[n + 1];
    for(int i = 0; i < n; i++){
        cin >> s[i];
        if(s[i] == 'U')
          ans[i] = 'D';
        else if(s[i] == 'D')
          ans[i] = 'U';
        else
          ans[i] = s[i];
        cout << ans[i];
    }
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
