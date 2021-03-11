#include <iostream>
using namespace std;

int main()
{
    int L = 0, B = 0;
    int i = 0;
    cin >> L >> B;
    while(B >= L){
        L *= 3;
        B *= 2;
        i++;
    }
    cout << i;
    return 0;
}
