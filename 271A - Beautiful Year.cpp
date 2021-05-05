#include <iostream>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
    IOS
    int n = 0, a = 0, b = 0, c = 0, d = 0;
    cin >> n;
    while(n++){
        a = n % 10;
        b = (n % 100) / 10;
        c = (n % 1000) / 100;
        d = n / 1000;
        if(a != b && a != c && a != d && b != c && b != d && c != d)
            break;
    }
    cout << n;
    return 0;
}
