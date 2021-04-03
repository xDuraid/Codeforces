#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n = 0, r = 0;
    cin >> n;
    int a[n] = {0};
    int mx = 0, mn = INT_MAX;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] > mx)
            mx = a[i];
        if(a[i] < mn)
            mn = a[i];
    }
    for(int i = 0; i < n; i++){
        if(a[i] < mx && a[i] > mn)
            r++;
    }
    cout << r;
    return 0;
}
