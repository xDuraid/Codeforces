#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    int a[4] = {6,8,4,2};
    cin >> n;
    if(n == 0){
        cout << 1;
    }
    else{
        cout << a[n%4];
    }
    return 0;
}
