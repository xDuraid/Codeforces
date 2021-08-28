#include <iostream>

using namespace std;

#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    IOS
    int t = 0; cin >> t;
    while(t--){
        int n = 0, mx = 0, ans = -1;
        cin >> n;
        int a[n] = {0};
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(a[i] > mx)
                mx = a[i];
        }
        for(int i = 0; i < n; i++){
            if(a[i] != mx) continue;
            if(i > 0 && a[i] > a[i - 1]){
                ans = i + 1;
                break;
            }
            if(i < n - 1 && a[i] > a[i + 1]){
                ans = i + 1;
                break;
            }

        }
        cout << ans << endl;
    }
    return 0;
}
