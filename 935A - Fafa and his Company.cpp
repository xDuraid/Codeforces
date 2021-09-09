#include <iostream>

using namespace std;

#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define TEST int t = 0; cin >> t; while(t--)
#define ll long long
int main()
{
    IOS
    int n = 0, ans = 0;
    cin >> n;
    for(int i = 1; i < n; i++){
        if(n % i == 0)
            ans++;
    }
    cout << ans;

    return 0;
}
