#include <iostream>
using namespace std;
 
int main()
{
    int n = 0;
    cin >> n;
    int a[n] = {0};
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        if(i == 0)
            cout << a[1] - a[0] << " " << a[n-1] - a[0] << endl;
        else if(i == (n-1))
            cout << a[n-1] - a[n-2] << " " << a[n-1] - a[0];
        else{
            cout << min(a[i+1] - a[i], a[i] - a[i-1]) << " " << max(a[i] - a[0], a[n-1] - a[i]) << endl;
        }
    }
    return 0;
}
