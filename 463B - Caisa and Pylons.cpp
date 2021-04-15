#include <iostream>

using namespace std;



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n = 0, d = 0, e = 0, a = 0, b = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> b;
        e += a - b;
        if(e < 0){
            d += -1*e;
            e = 0;
        }
        a = b;
    }
    cout << d;

    return 0;

}
