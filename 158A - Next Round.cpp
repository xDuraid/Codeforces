#include <iostream>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
    IOS
    int n = 0, k = 0, r = 0;
    cin >> n >> k;
    int a[n] = {0};
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        if(a[i] >= a[k-1] && a[i] > 0)
            r++;
    }
    cout << r;
    return 0;
}
