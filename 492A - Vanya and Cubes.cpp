#include <iostream>

using namespace std;

#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define TEST int t = 0; cin >> t; while(t--)

int main()
{
    IOS
    int n = 0, i = 0, r = 0;
    cin >> n;
    while(r <= n){
        i++;
        r += i * (i + 1) / 2;
    }
    cout << i - 1;
    return 0;
}
