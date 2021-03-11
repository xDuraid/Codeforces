#include <iostream>
using namespace std;

int main()
{
    int n = 0, h = 0;
    cin >> n >> h;
    int w = n;
    int temp = 0;
    for(int i = 0; i < n; i++){
        cin >> temp;
        if(temp > h)
            w++;
    }
    cout << w;
    return 0;
}
