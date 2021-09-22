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
    int n = 0;
    cin >> n;
    string s;
    cin >> s;
    for(int i = 0; i < n; i++){
        if(n % (i + 1) == 0){
            reverse(s.begin(), s.begin() + i + 1);
        }
    }
    cout << s;
    return;
}

int main()
{
    IOS
    solve();
    return 0;
}
