#include <iostream>
using namespace std;

#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define TEST int t = 0; cin >> t; while(t--)



int main()
{
    IOS
    TEST{
        int n = 0;
        cin >> n;
        int a[n] = {0};
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        if(a[0] != a[1] && a[0] != a[2]){
            cout << 1 << endl;
        }
        else if(a[n - 1] != a[n - 2] && a[n - 1] != a[n - 3]){
            cout << n << endl;
        }
        else{
            for(int i = 1; i < n - 1; i++){
                if(a[i] != a[i - 1] && a[i] != a[i + 1]){
                    cout << i + 1 << endl;
                    break;
                }
            }
        }
    }

    return 0;
}
