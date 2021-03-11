#include <iostream>
using namespace std;
 
int main()
{
    int n = 0, result = 0;
    cin >> n;
    int a[n] = {0}, b[n] = {0};
    for(int i = 0; i < n; i++){
        cin >> a[i] >> b[i];
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j){
                continue;
            }
            if(a[i] == b[j]){
                result++;
            }
        }
    }
    cout << result;
    return 0;
}
