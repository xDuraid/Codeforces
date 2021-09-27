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
    int n = 0, ans = 0, A = 0, B = 0;
    cin >> n;
    int a[n] = {0}, b[n] = {0};
    for(int i = 0; i < n; i++)  cin >> a[i];
    for(int i = 0; i < n; i++)  cin >> b[i];

    for(int i = 0; i < n; i++){
        A += (a[i] == 1 && b[i] == 0);
        B += (a[i] == 0 && b[i] == 1);
    }
    if(A == 0)
        ans = -1;
    else
        ans = B / A + 1;
    cout << ans << "\n";
    return;
}

int main()
{
    IOS
    solve();
    return 0;
}
