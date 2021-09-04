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
        long long sum = n * (n + 1) / 2;
        long long x = 0, y = 0;
        if(sum % 2 == 1)
            cout << "NO" << endl;
        else{
            cout << "YES" << endl;
            int j = 2;
            for(int i = 0; i < n / 2; i++){
                a[i] = j;
                j += 2;
                x += a[i];
            }
            j = 1;
            for(int i = n / 2; i < n - 1; i++){
                a[i] = j;
                j += 2;
                y += a[i];
            }
            a[n - 1] = x - y;
            for(int i = 0; i < n; i++)
                cout << a[i] << " ";
            cout << endl;
        }
    }
    return 0;
}
