#include <iostream>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
    IOS
    long long n;
    int r = 0;
    cin >> n;
    while(n){
        if(n % 10 == 7 || n % 10 == 4)
            r++;
        n /= 10;
    }
    if(r == 7 || r == 4)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
