#include <iostream>

using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
    IOS
    int n = 0;
    long long res = 1;
    cin >> n;
    int a[n] = {0};
    bool flag = 1;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i])
            flag = 0;
    }

    if(flag){
        cout << 0;
        return 0;
    }

    for(int i = 0; i < n; i++){
        if(a[i] == 1){
            for(int j = i + 1; j < n; j++){
                if(a[j] == 1){
                    res *= (j - i);
                    break;
                }
            }
        }
    }
    cout << res;
    return 0;
}
