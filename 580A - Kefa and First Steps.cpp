#include <iostream>
using namespace std;

#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define TEST int t = 0; cin >> t; while(t--)

int main()
{
    IOS
    int n = 0, a = 0, b = 0, t = 1, mx = 1;
    cin >> n;
    cin >> a;
    for(int i = 1; i < n; i++){
        cin >> b;
        t++;
        if(a > b){
            t = 1 ;
        }
        mx = max(t, mx);
        a = b;
    }
    cout << mx;
    return 0;
}
