#include <iostream>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define TEST int t = 0; cin >> t; while(t--)

int main()
{
    IOS
    TEST{
        int n = 0, r = 0;
        cin >> n;
        int a[n + 1] = {0};
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }
        for(int i = 1; i <= n; i++){
            if(a[i] != i){
                if(a[1] == 1 || a[n] == n)
                    r = 1;
                else if(a[1] == n && a[n] == 1)
                    r = 3;
                else
                    r = 2;
                break;
            }
        }
        cout << r << endl;
    }
    return 0;
}
