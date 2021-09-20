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
    TEST
    {
        string s;
        int n = 0, q = 0, l = 0, r = 0;
        cin >> n >> q;
        cin >> s;
        while(q--){
            bool ans = 0;
            cin >> l >> r;
            for(int i = 0; i < l - 1; i++){
                if(s[l - 1] == s[i]){
                    ans = 1;
                    break;
                }
            }
            for(int i = r; i < n; i++){
                if(s[r - 1] == s[i]){
                    ans = 1;
                    break;
                }
            }
            cout << (ans ? "YES" : "NO") << endl;
        }
    }
    return 0;
}
