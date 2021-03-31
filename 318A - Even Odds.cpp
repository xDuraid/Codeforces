#include <iostream>
using namespace std;

int main(){
    long long n = 0, m = 0;
    cin >> n >> m;
    long long odds = (n+1)/2;
    if(m > odds){
        cout << 2*(m-odds);
    }
    else{
        cout << 2*m - 1;
    }
    return 0;
}
