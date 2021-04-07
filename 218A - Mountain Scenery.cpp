#include <iostream>
using namespace std;

int main()
{
    int n = 0, k = 0;
    cin >> n >> k;
    int a[2*n+1] = {0};
    for(int i = 0; i < 2*n+1; i++){
        cin >> a[i];
    }
    for(int i = 0; i < 2*n+1; i++){
        if(i % 2 == 1 && a[i] > (a[i-1]+1) && a[i] > (a[i+1]+1) && k){
            cout << a[i] - 1 << " ";
            k--;
        }
        else
            cout << a[i] << " ";
    }

    return 0;
}
