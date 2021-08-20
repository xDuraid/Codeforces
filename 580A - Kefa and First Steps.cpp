#include <iostream>

using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define TEST int t = 0; cin >> t; while(t--)


int main()
{
    IOS
    int n = 0;
    cin >> n;
    int a[n] = {0};
    int t = 1, r = 0;
    cin >> a[0];
    for(int i = 1; i < n; i++){
        cin >> a[i];
        if(a[i] >= a[i - 1])
            t++;
        else{
            r = max(r, t);
            t = 1;
        }
    }
    r = max(r ,t);
    cout << r;

    return 0;
}
