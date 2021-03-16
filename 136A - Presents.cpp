#include <iostream>
using namespace std;


int main()
{
    int n = 0;
    cin >> n;
    int x, b[n + 1] = {0};
    for(int i = 1; i < n + 1; i++){
        cin >> x;
        b[x] = i;
    }
    for(int i = 1; i < n + 1; i++)
        cout << b[i] << " ";
    return 0;
}
