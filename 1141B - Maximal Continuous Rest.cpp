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
    int n = 0, mx = 0, r = 0;
    cin >> n;
    int a[n] = {0};
    for(int i = 0; i < n; i++)
        cin >> a[i];
    for(int i = 0; i < 2 * n; i++){
        if(a[i % n] == 1)
            r++;
        else
            r = 0;
        mx = max(r, mx);
    }
    cout << mx;
    return 0;
}
