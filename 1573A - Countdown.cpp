#include <iostream>
using namespace std;

#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define TEST int t = 0; cin >> t; while(t--)
#define ll long long
#define sz size()
#define fi first
#define se second
#define IGNORE cin.ignore(numeric_limits<streamsize>::max(), '\n');

int main()
{
    IOS
    TEST
    {
        int n = 0, ans = 0;
        string s;
        cin >> n >> s;
        for(int i = 0; i < n; i++){
            if(i == n - 1 && s[i] - '0' != 0){
                ans += s[i] - '0';
            }
            else if(s[i] - '0' != 0){
                ans += s[i] - '0' + 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
