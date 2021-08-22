#include <iostream>
#include <algorithm>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define TEST int t = 0; cin >> t; while(t--)


int main()
{
    IOS
    int n = 0, m = 0, s = 0;
    cin >> n >> m;
    int a[n] = {0};
    for(int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    int j = 0;
    while(j < m && a[j] <= 0){
        s += a[j];
        j++;
    }
    s *= -1;
    cout << s;
    return 0;
}
