#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n = 0, t = 1;
    cin >> n;
    int a[n] = {0};
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] % 2 == 0)
            cout << a[i] / 2 << endl;
        else{
            cout << (a[i] + t) / 2 << endl;
            t *= -1;
        }
    }
    
    return 0;
}
