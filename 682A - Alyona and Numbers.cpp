#include <iostream>
using namespace std;

int main()
{
    long long n = 0, m = 0;
    cin >> n >> m;
    long long rem[5] = {0}, need[6] = {0};
    for(int i = 1; i <= n; i++){
        need[5 - i % 5]++;
    }
    for(int i = 1; i <= m; i++){
        rem[i % 5]++;
    }
    cout << need[5]*rem[0]+
            need[1]*rem[1]+
            need[2]*rem[2]+
            need[3]*rem[3]+
            need[4]*rem[4];
    return 0;
}
