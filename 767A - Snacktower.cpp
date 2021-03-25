#include <iostream>
using namespace std;
int main()
{
    int n = 0;
    cin >> n;
    int a[n] = {0};
    int next = n;
    int has[n+1] = {0};
    for(int i = 0; i < n; i++){
        cin >> a[i];
        has[a[i]] = 1;
        while(has[next]){
            cout << next << " ";
            next--;
        }
        cout << endl;
    }
    return 0;
}

