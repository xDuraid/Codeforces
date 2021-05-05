#include <iostream>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
    IOS
    int n = 0, k = 0, w = 0, r = 0;
    cin >> k >> n >> w;
    for(int i = 1; i <= w; i++){
       r += k * i;
    }
    if(r > n)
        cout << r - n;
    else
        cout << 0;
    return 0;
}
