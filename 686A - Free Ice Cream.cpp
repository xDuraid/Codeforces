#include <iostream>

using namespace std;

int main()
{
    long long n = 0, x = 0;
    cin >> n >> x;
    char o = ' ';
    long long t = 0, w = 0;
    for(int i = 0; i < n; i++){
        cin >> o >> t;
        if(o == '+')
            x += t;
        else{
            if(t > x)
                w++;
            else
                x -= t;
        }
    }
    cout << x << " " << w;
    return 0;
}
