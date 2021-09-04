#include <iostream>
using namespace std;

#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define TEST int t = 0; cin >> t; while(t--)

int main()
{
    IOS
    int n = 0;
    int d[14] = {4, 7, 44, 77, 74, 47, 777, 774, 747, 477, 447, 474, 744, 444};
    cin >> n;
    for(int i = 0; i < 14; i++){
        if(n % d[i] == 0){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}
