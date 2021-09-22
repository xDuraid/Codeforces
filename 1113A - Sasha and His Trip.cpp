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
    int n = 0, v = 0, ans = 0, f = 0;
    cin >> n >> v;
    for(int i = 1; i < n; i++){
        if(f < v){
            ans += min((v - f), (n - i)) * i;
            f += min((v - f), (n - i));
        }
        if(n - i <= f)
            break;
        f--;
    }
    cout << ans;
    return 0;
}
