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
    ll n = 0, x = 0, odds = 0, sum = 0, mn = INT_MAX;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x;
        sum += x;
        if((x & 1) == 1)
            odds++;
        if(x < mn && (x & 1 == 1))
            mn = x;
    }
    if(odds % 2 == 1){
        sum -= mn;
    }
    cout << sum;
    return 0;
}
