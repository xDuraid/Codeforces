#include <iostream>
#include <math.h>
using namespace std;

bool is_prime(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0)
            return 0;
    }
    return 1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    int n = 0, m = 0;
    cin >> n >> m;
    for(int i = n+1; i <= m; i++){
        if(is_prime(i)){
            if(i == m){
                cout << "YES";
                return 0;
            }
            else{
                break;
            }
        }
    }
    cout << "NO";
    return 0;
}
