#include <iostream>
using namespace std;

int main()
{
    long long n = 0;
    cin >> n;
    int sign = (n % 2 == 0) ? 1 : -1;
    cout << sign*((n+1)/2);
    return 0;
}
