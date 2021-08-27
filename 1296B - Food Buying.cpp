#include <iostream>

using namespace std;

#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    IOS
    int t = 0;
    cin >> t;
    while(t--){
        long long n = 0, r = 0, sp = 0, cb = 0;
        cin >> n;
        while(n > 9){
            r = n % 10;
            sp += n - r;
            cb = n / 10;
            n = cb + r;
        }
        sp += n;
        cout << sp << endl;
    }

    return 0;
}
