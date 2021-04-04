#include <iostream>
using namespace std;

#define ll long long

ll GCD(ll a, ll b){
    return b == 0 ? a : GCD(b,a%b);
}

int main()
{
    ll a = 0, b = 0;
    cin >> a >> b;
    if(a == 1)
        a++;
    if(b - a < 2){
        cout << -1;
    }
    else if(b - a == 2){
        if(a % 2 == 0)
            cout << a << " " << a+1 << " " << a+2;
        else{
            if(GCD(a,a+1)==1 && GCD(a+1,a+2)==1 && GCD(a,a+2) !=1)
                cout << a << " " << a+1 << " " << a+2;
            else
                cout << -1;
        }
    }
    else if(b - a >= 3){
        if(a % 2 != 0)
            a++;
        cout << a << " " << a+1 << " " << a+2;
    }
    return 0;
}
