#include <iostream>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define TEST int t = 0; cin >> t; while(t--)

int gcd(int a, int b){
    if(b == 0)
        return a;
    return gcd(b, a % b);
}

int main()
{
    IOS
    TEST{
        int n = 0;
        cin >> n;
        cout << 100 / gcd(100, n) << endl;
    }
    return 0;
}
