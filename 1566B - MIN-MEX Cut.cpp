#include <iostream>
#include <string>
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
    string s;
    int zeros = 0, ans = 0, l = 0, r = 0;
    cin >> s;
    zeros = count(s.begin(), s.end(), '0');
    l = s.find('0');
    r = s.rfind('0');
    if(zeros == 0)
        ans = 0;
    else if(r - l + 1 == zeros)
        ans = 1;
    else
        ans = 2;
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
