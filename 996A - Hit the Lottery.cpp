#include <iostream>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define TEST int t = 0; cin >> t; while(t--)


int main()
{
    IOS
    int n = 0, r = 0;
    cin >> n;
    if(n >= 100){
        r += n / 100;
        n %= 100;
    }
    if(n >= 20){
        r += n / 20;
        n %= 20;
    }
    if(n >= 10){
        r += n / 10;
        n %= 10;
    }
    if(n >= 5){
        r += n / 5;
        n %= 5;
    }
    if(n >= 1){
        r += n;
    }
    cout << r;
    return 0;
}
