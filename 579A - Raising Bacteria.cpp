#include <iostream>

using namespace std;

int main()
{
    int n = 0, r = 0;
    cin >> n;
    while(n){
        r += n % 2;
        n /= 2;
    }
    cout << r;
    return 0;
}
