#include <iostream>

using namespace std;

int main()
{
    int n = 0, m = 0;
    cin >> n >> m;
    char c;
    for(int i = 0; i < n*m; i++){
        cin >> c;
        if(c != 'W' && c != 'B' && c != 'G'){
            cout << "#Color";
            return 0;
        }
    }
    cout << "#Black&White";
    return 0;
}
