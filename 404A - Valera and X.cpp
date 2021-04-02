#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    char s[n+1][n+1];
    cin >> s[0][0] >> s[0][1];
    char diag = s[0][0], nondiag = s[0][1];
    if(diag == nondiag){
        cout << "NO";
        return 0;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if((i == 0 && j == 0) || (i == 0 && j == 1))
                continue;
            cin >> s[i][j];
            if(i - j == 0 || i + j == n - 1){
                if(s[i][j] != diag ){
                    cout << "NO";
                    return 0;
                }
            }
            else if(s[i][j] != nondiag){
                cout << "NO";
                return 0;
            }
        }
    }
    cout << "YES";
    return 0;
}


