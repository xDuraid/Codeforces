#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n = 0, c = 0, sum1 = 0, sum2 = 0;
    cin >> n;
    int a[n] = {0};
    for(int i = 0; i < n; i++){
        cin >> a[i];
        sum1 += a[i];
    }
    sort(a, a+n);
    for(int i = n - 1; i >= 0; i--){
        sum2 += a[i];
        c++;
        if(sum2 > sum1/2)
            break;
    }
    cout << c;
    return 0;
}
