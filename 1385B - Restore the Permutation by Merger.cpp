#include <iostream>
#include <queue>
using namespace std;

#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define TEST int t = 0; cin >> t; while(t--)



int main()
{
    IOS
    TEST{
        queue<int> q;
        int n = 0;
        cin >> n;
        bool a[n + 1] = {0};
        n *= 2;
        int x = 0;
        for(int i = 0; i < n; i++){
            cin >> x;
            if(!a[x]){
                a[x] = 1;
                q.push(x);
            }
        }
        while(!q.empty()){
            cout << q.front() << " ";
            q.pop();
        }
        cout << endl;
    }
    return 0;
}
