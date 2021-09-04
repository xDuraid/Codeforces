#include <iostream>
#include <algorithm>
using namespace std;

#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define TEST int t = 0; cin >> t; while(t--)

int main()
{
    IOS
    TEST{
        int n = 0, k = 0, sum = 0;
        cin >> n >> k;
        int a[n] = {0}, b[n] = {0};
        for(int i = 0; i < n; i++)
            cin >> a[i];
        for(int i = 0; i < n; i++)
            cin >> b[i];
        sort(a, a + n);
        sort(b, b + n);
        int j = n - 1;
        for(int i = 0; i < n && k != 0; i++){
            if(b[j] > a[i]){
                swap(a[i], b[j]);
                k--;
                j--;
            }
        }
        for(int i = 0; i < n; i++)
            sum += a[i];
        cout << sum << endl;
    }
    return 0;
}
