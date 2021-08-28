#include <iostream>
#include <algorithm>

using namespace std;

#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int gcd(int a, int b){
    if(b == 0)
        return a;
    return gcd(b, a % b);

}

int ss(int a, int b){
    return (a % 2 == 1 && b % 2 == 0);
}

int main()
{
    IOS
    int t = 0; cin >> t;
    while(t--){
        int n = 0, ans = 0;
        cin >> n;
        int a[n] = {0};
        for(int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n, ss);
        reverse(a, a + n);
        for(int i = 0; i < n - 1; i++){
            for(int j = i + 1; j < n; j++){
                if(gcd(a[i], 2 * a[j]) > 1)
                    ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
