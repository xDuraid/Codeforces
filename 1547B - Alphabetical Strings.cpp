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
    string s, a = "abcdefghijklmnopqrstuvwxyz";
    cin >> s;
    int n = s.ln;
    int l = -1, r = -1, f = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == 'a'){
            l = i - 1;
            r = i + 1;
            f++;
            break;
        }
    }
    while(l >= 0 || r <= n - 1){
        if(l >= 0 && s[l] == a[f]){
            l--;
            f++;
        }
        else if(r <= n - 1 && s[r] == a[f]){
            r++;
            f++;
        }
        else{
            cout << "NO\n";
            return;
        }
    }
    if(f == n)
        cout << "YES\n";
    else
        cout << "NO\n";
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
