#include <iostream>
using namespace std;

#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define TEST int tst = 0; cin >> tst; while(tst--)
#define ll long long
#define ln length()
#define fi first
#define se second
#define IGNORE cin.ignore(numeric_limits<streamsize>::max(), '\n');


int main()
{
    IOS
    string s, t;
    int ans = 0;
    cin >> s >> t;
    int i = s.ln - 1, j = t.ln - 1;
    while(s[i] == t[j] & i >= 0 && j >= 0){
        i--;
        j--;
        ans++;
    }
    cout << s.ln + t.ln - 2 * ans;
    return 0;
}
