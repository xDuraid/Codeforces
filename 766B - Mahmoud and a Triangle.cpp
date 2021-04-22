#include <iostream>
#include <algorithm>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
    IOS

    int n = 0;
    cin >> n;
    int a[n] = {0};
    for(int i = 0; i < n; i++)
        cin >> a[i];
    sort(a,a+n);
    for(int i = 2; i < n; i++){
        if(a[i] < a[i-1] + a[i-2]){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}
