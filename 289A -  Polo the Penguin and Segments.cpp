#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int n = 0, k = 0, x = 0, l = 0, r = 0, c = 0;
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        cin >> l >> r;
        x += r - l +1;
    }
    c = k - x % k;
    if(c == k)
        c -= k;
        cout << c;
    return 0;
}
