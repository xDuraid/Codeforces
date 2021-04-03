#include <iostream>
using namespace std;

int main()
{
    long long n = 0, m = 0, a = 0;
    cin >> n >> m >> a;
    long long x = (n+a-1)/a;
    long long y = (m+a-1)/a;
    cout << x*y;
    return 0;
}
