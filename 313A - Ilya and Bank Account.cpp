#include <iostream>

using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define TEST int t = 0; cin >> t; while(t--)


int main()
{
    IOS
    long long n = 0;
    cin >> n;
    if(n < 0){
        long long r = 0, o = n % 10, t = (n % 100) / 10;
        n /= 100;
        if(o < t){
            n = n * 10 + t;
        }
        else{
            n = n * 10 + o;
        }
    }
    cout << n;
    return 0;
}
