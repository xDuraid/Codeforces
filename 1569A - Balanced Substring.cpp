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
    int n = 0, ans = -1;
    string s;
    cin >> n;
    cin >> s;
    for(int i = 0; i < n - 1; i++){
        if(s[i] != s[i + 1]){
            cout << i + 1 << " " << i + 2 << "\n";
            return;
        }
    }

    cout << -1 << " " << -1 << "\n";
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
