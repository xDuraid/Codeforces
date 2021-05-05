#include <iostream>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
    IOS
    int n = 0, k = 0;
    cin >> n >> k;
    while(k--){
        if(n % 10 == 0)
            n /= 10;
        else
            n--;
    }
    cout << n;
    return 0;
}
