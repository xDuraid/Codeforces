#include <iostream>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
    IOS;
    int n = 0, k = 0, sum = 0, p = 0;
    cin >> n >> k;
    int a[n] = {0};
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] < 0 && k){
            a[i] *= -1;
            k--;
            p = i;
        }
        sum += a[i];
    }
    if(k % 2 == 1){
        if(p == n - 1)
            sum -= 2*a[p];
        else if(a[p] < a[p+1])
            sum -= 2*a[p];
        else
            sum -= 2*a[p+1];
    }

    cout << sum;
    return 0;
}
