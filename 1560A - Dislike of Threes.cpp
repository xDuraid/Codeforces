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
    for(int i = 1; i <= n; i++){
        if(i % 3 == 0 || (i - 3) % 10 == 0)
            n++;
    }
    cout << n << endl;
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
