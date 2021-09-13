#include <iostream>

using namespace std;

#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define TEST int t = 0; cin >> t; while(t--)
#define ll long long
#define sz size()
#define fi first
#define se second


int main()
{
    IOS
    int n = 0, d = 0, ans = 0, t = 0, x = 0;
    cin >> n >> d;
    for(int i = 0; i < n; i++){
        cin >> x;
        t += x;
    }
    if(t + (n - 1) * 10 > d){
        ans = -1;
    }
    else{
        ans = (d - t) / 5;
    }
    cout << ans;
    return 0;
}
