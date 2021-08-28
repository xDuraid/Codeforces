#include <iostream>
using namespace std;

#define IOS ios_base::sync_with_stdio(0); cin.tie(0);

int main()
{
    IOS
    int t = 0; cin >> t;
    while(t--){
        int n = 0;
        bool flag = 0;
        cin >> n;
        int a[n] = {0};
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        if(n > 1){
            for(int i = 0; i < n - 1; i++){
                if(abs(a[i] - a[i + 1]) % 2 == 1){
                    flag = 1;
                    break;
                }
            }
        }
        if(flag)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}
