#include <iostream>

using namespace std;

int main()
{
    string s[4];
    int r = 0;
    for(int i = 0; i < 4; i++)
        cin >> s[i];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            r = 0;
            r += (s[i][j] == s[i][j+1]) +
                 (s[i+1][j] == s[i+1][j+1]) +
                 (s[i][j] == s[i+1][j]) +
                 (s[i][j+1] == s[i+1][j+1])+
                 (s[i][j] == s[i+1][j+1])+
                 (s[i][j+1] == s[i+1][j]);
            if(r >= 3){
                cout << "YES";
                return 0;
            }

        }
    }
    cout << "NO";
    return 0;
}
