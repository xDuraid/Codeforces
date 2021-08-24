#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define TEST int t = 0; cin >> t; while(t--)

int main()
{
    IOS
    TEST{
        int n = 0, m = 0;
        cin >> n;
        vector<int> a(n + 1), s(n + 1);
        for(int i = 1; i <= n; i++){
            cin >> a[i];
            s[i] = a[i];
        }
        sort(s.begin(), s.end());
        if(s != a){
            for(int i = 1; i <= n; i++){
                if(i % 2 == 1){
                    for(int j = 1; j <= n - 2; j += 2){
                        if(a[j] > a[j + 1])
                            swap(a[j], a[j + 1]);
                    }
                }
                else{
                    for(int j = 2; j <= n - 1; j += 2){
                        if(a[j] > a[j + 1])
                            swap(a[j], a[j + 1]);
                    }
                }
                if(s == a){
                    m = i;
                    break;
                }
            }
        }

        cout << m << endl;

    }
    return 0;
}
