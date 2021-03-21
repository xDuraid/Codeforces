#include <iostream>
using namespace std;
int main()
{
    int n = 0;
    cin >> n;
    int a[n] = {0}, has[n+1] = {0};
    int next = n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] == next){
            cout << next << " ";
            next--;
            while(has[next] == 1){
                cout << next << " ";
                has[next] = 0;
                next--;
            }
            cout << endl;
        }
        else{
            has[a[i]] = 1;
            cout << endl;
        }
    }
    return 0;
}
