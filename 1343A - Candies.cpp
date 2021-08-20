#include <iostream>

using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define TEST int t = 0; cin >> t; while(t--)


int main()
{
    IOS
    TEST{
        int n = 0;
    cin >> n;
    int a[30] = {0};
    a[0] = 1;
    for(int i = 1; i < 30; i++){
        a[i] += (2 * a[i-1]) + 1;
    }
    for(int i = 29; i >= 0; i--){
        if(n % a[i] == 0){
            cout << n / a[i] << endl;
            break;
        }
    }
    }


    return 0;
}
