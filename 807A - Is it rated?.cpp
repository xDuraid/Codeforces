#include <iostream>
using namespace std;
 
int main(){
    int n = 0;
    cin >> n;
    int a[n] = {0}, b[n] = {0};
    for(int i = 0; i < n; i++){
        cin >> a[i] >> b[i];
        if(a[i] != b[i]){
            cout << "rated";
            return 0;
        }
    }
    for(int i = 0; i < n-1; i++){
        if(a[i] < a[i+1]){
            cout << "unrated";
            return 0;
        }
    }
    cout << "maybe";
    return 0;
}
