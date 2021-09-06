#include <iostream>
using namespace std;

#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define TEST int t = 0; cin >> t; while(t--)



int main()
{
    IOS
    int n = 0;
    cin >> n;
    cout << n / 2 << endl;
    if(n % 2 == 1){
        cout << 3 << " ";
        n -= 3;
    }
    while(n){
        cout << 2 << " ";
        n -= 2;
    }

    return 0;
}
