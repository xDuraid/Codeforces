#include <iostream>

using namespace std;

#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define TEST int t = 0; cin >> t; while(t--)


int main()
{
    IOS
    int n = 0;
    cin >> n;
    int a[n][n];
    for(int i = 0; i < n; i++) a[i][0] = 1;
    for(int i = 0; i < n; i++) a[0][i] = 1;
    for(int i = 1; i < n; i++){
        for(int j = 1; j < n; j++){
            a[i][j] = a[i][j - 1] + a[i - 1][j];
        }
    }
    cout << a[n - 1][n - 1];
    return 0;
}
