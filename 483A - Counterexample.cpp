#include <iostream>
using namespace std;

int main()
{
    long long l = 0, r = 0;
    cin >> l >> r;

    if(l % 2 != 0){
        l++;
    }
    if(r - l < 2)
        cout << -1;
    else
        cout << l << " " << l+1 << " " << l+2;
    return 0;
}
