#include <iostream>
using namespace std;

int main()
{
    int n = 0, a = 0, b = 0, up = 0;
    cin >> n >> up;
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        if(up == a || up == 7 - a || up == b || up == 7 - b){
            cout << "NO";
            return 0;
        }
        up = 7 - up;
    }
    cout << "YES";
    return 0;
}
