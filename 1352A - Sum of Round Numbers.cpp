#include <iostream>
#include <vector>
using namespace std;

#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);


int main()
{
    IOS
    int t = 0; cin >> t;
    while(t--){
        int n = 0, r = 10;;
        vector <int> a;
        cin >> n;
        while(n){
            int t = n % r;
            r *= 10;
            n -= t;
            if(t)
                a.push_back(t);
        }
        cout << a.size() << endl;
        for(int i = 0; i < a.size(); i++)
            cout << a[i] << " ";
        cout << endl;
    }
    return 0;
}
