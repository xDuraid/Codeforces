#include <iostream>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define TEST int t = 0; cin >> t; while(t--)


int main()
{
    IOS
    TEST
    {
        long long n = 0, c2 = 0, c3 = 0, s = 0;
        cin >> n;
        while(n != 1){
            if(n % 2 == 0){
                n /= 2;
                c2++;
            }
            else if(n % 3 == 0){
                n /= 3;
                c3++;
            }
            else{
                break;
            }
        }
        if(n == 1 && c3 >= c2){
            cout << c3 + (c3 - c2) << endl;
        }
        else{
            cout << -1 << endl;
        }
    }
    return 0;
}
