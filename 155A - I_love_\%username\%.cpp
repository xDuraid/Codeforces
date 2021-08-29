#include <iostream>
#include <algorithm>

using namespace std;

#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


int main()
{
    IOS
    int n = 0, mn = 0, mx = 0, ans = 0;
    cin >> n;
    int a[n] = {0};
    cin >> a[0];
    mn = a[0];
    mx = a[0];
    for(int i = 1; i < n; i++){
        cin >> a[i];
        if(a[i] > mx){
            mx = a[i];
            ans++;
        }
        else if(a[i] < mn){
            mn = a[i];
            ans++;
        }
    }
    cout << ans;
    return 0;
}
