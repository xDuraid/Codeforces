#include <iostream>
#include <math.h>
using namespace std;

#define IOS ios_base::sync_with_stdio(0); cin.tie(0);
int f(int n)
{
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            return i;
        }
    }
    return n;
}
int main()
{
    IOS
    int t = 0; cin >> t;
    while(t--){
        int n = 0, k = 0;
        cin >> n >> k;
        if(n % 2 == 1){
            n += f(n);
            k--;
        }
        if(k != 0){
            n += k * 2;
        }
        cout << n << endl;
    }

    return 0;
}
