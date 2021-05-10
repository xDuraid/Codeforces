#include <iostream>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
    IOS;
    int n = 0, r = 0, x = 0, mx = 0, mn = 100, pmx = 0, pmn = 0;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> x;
        if(x > mx){
            mx = x;
            pmx = i;
        }
        if(x <= mn){
            mn = x;
            pmn = i;
        }
    }
    r = pmx - 1 + n - pmn;
    if(pmx > pmn)
        r--;
    cout << r;
    return 0;
}
