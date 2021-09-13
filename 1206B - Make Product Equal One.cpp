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
    long long n = 0, neg = 0, zeros = 0, ans = 0, x = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x;
        if(x < 0){
            neg++;
            ans += -1 - x;
        }
        else if(x > 0){
            ans += x - 1;
        }
        else{
            zeros++;
        }
    }
    if(neg % 2 == 1 && zeros == 0){
            ans += 2;
    }
    ans += zeros;
    cout << ans;
    return 0;
}
