#include <iostream>
using namespace std;

#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
    IOS;
    int k = 0, l = 0, m = 0, n = 0, d = 0, r = 0;
    cin >> k >> l >> m >> n >> d;
    for(int i = 1; i <= d; i++){
        if(i % k == 0 || i % l == 0 || i % n == 0 || i % m == 0)
        r++;
    }
    cout << r;
    return 0;
}
