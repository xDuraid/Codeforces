#include <iostream>
#include <vector>
using namespace std;

#define IOS ios_base::sync_with_stdio(0); cin.tie(0);

int main()
{
    IOS
    int t = 0; cin >> t;
    while(t--){
        int n = 0;
        vector<int> v;
        cin >> n;
        for(int i = 9; i >= 1; i--){
            if(n >= i){
                n -= i;
                v.push_back(i);
            }
        }
        if(n != 0)
            cout << -1 << endl;
        else{
            for(int i = v.size() - 1; i >= 0; i--){
                cout << v[i];
            }
            cout << endl;
        }
    }

    return 0;
}
