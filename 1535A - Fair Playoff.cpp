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
    int s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    cin >> s1 >> s2 >> s3 >> s4;
    if((max(s1, s2) < min(s3, s4)) || (max(s3, s4) < min(s1, s2)))
        cout << "NO\n";
    else
        cout << "YES\n";
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
