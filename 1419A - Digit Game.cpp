#include <iostream>
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
    bool odd = 0, even = 0;
    string s;
    cin >> n >> s;
    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            odd |= ((s[i] - '0') % 2 == 1);
        }
        else if(i % 2 == 1 && (s[i] - '0') % 2 == 0){
            even |= ((s[i] - '0') % 2 == 0);
        }
    }
    if(n % 2 == 1)
        cout << (odd ? 1 : 2) << endl;
    else
        cout << (even ? 2 : 1) << endl;
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
