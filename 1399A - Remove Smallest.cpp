#include <iostream>
#include <algorithm>

using namespace std;

#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


int main()
{
    IOS
    int t = 0; cin >> t;
    while(t--){
        int n = 0, flag = 1;
        cin >> n;
        int a[n] = {0};
        for(int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        for(int i = 1; i < n; i++){
            if(a[i] - a[i - 1] > 1)
                flag = 0;
        }
        if(flag)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
    return 0;
}
