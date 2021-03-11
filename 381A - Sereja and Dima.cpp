#include <iostream>
using namespace std;

int main()
{
    int n = 0, S = 0, D = 0, t = 0;
    cin >> n;
    int a[n] = {0};
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int i = 0;
    while(i != n){
        if(a[i] > a[n-1]){
            if(t % 2 == 0)
                S += a[i];
            else
                D += a[i];
            t++;
            i++;
        }
        else{
            if(t % 2 == 0)
                S += a[n-1];
            else
                D += a[n-1];
            n--;
            t++;
        }
    }
    cout << S << " " << D;
    return 0;
}
