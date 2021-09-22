#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define TEST int tst = 0; cin >> tst; while(tst--)
#define ll long long
#define ln length()
#define fi first
#define se second
#define IGNORE cin.ignore(numeric_limits<streamsize>::max(), '\n');

void solve()
{
    int n = 0, sum = 0;
        cin >> n;
        vector <int> a(n, 0);
        for(int i = 0; i < n; i++){
            cin >> a[i];
            sum += a[i];
        }
        if(sum == 0){
            cout << "NO\n";
            return;
        }
        if(sum < 0){
            sort(a.begin(), a.end());
        }
        else if(sum > 0){
            sort(a.rbegin(), a.rend());
        }
        cout << "YES\n";
        for(int i = 0; i < n; i++){
            cout << a[i] << " ";
        }
        cout << "\n";
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
