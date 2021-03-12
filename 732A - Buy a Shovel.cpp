#include <iostream>

using namespace std;

int main()
{
    int k = 0, r = 0, price = 0, n = 0;
    cin >> k >> r;
    for(int i = 1; i <= 10; i++){
        price = k * i;
        if(price % 10 == 0 || price % 10 == r){
            n = i;
            break;
        }
    }
    cout << n;
    return 0;
}
