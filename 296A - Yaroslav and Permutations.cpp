#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    int a[n] = {0};
    int b[1001] = {0};
    for(int i = 0; i < n; i++){
        cin >> a[i];
        b[a[i]]++;
    }
    for(int i = 1; i < 1001; i++){
        if(b[i] > (n+1)/2){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}
