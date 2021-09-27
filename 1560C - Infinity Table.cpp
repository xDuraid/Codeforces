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
    int k = 0, x = 0, l = 0, r = 0, row = 0, col = 0;
    cin >> k;
    while(x * x < k){
        x++;
    }
    l = (x - 1) * (x - 1) + 1;
    r = x * x;
    int t = r - x + 1;
    if(k > t){
        row = x;
        col = r - k + 1;
    }
    else if(k < r - x + 1){
        row = k - l + 1;
        col = x;
    }
    else{
        row = x;
        col = x;
    }
    cout << row << " " << col << "\n";
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
