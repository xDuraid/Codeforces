#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n = 0, m = 0, b = 0;
    long long v = 0, p = 0;
    cin >> n;
    int a[n+1] = {0};
    int t = 0;
    for(int i = 0; i < n; i++){
        cin >> t;
        a[t] = i;
    }
    cin >> m;
    while(m--){
        cin >> b;
        v += a[b]+1;
        p += n - a[b];
    }
    cout << v << " " << p;
    return 0;

}
