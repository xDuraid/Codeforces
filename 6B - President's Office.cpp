#include <iostream>
#include <string>
#include <set>
using namespace std;

int main()
{
    set<char>d;
    int n = 0, m = 0;
    char c;
    cin >> n >> m >> c;
    char s[n+1][m+1];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++)
            cin >> s[i][j];
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(s[i][j] == c){
                if((j != m-1) && (s[i][j+1] != c) && (s[i][j+1] != '.')){
                    d.insert(s[i][j+1]);
                }
                if((j != 0) && (s[i][j-1] != c) && (s[i][j-1] != '.')){
                    d.insert(s[i][j-1]);
                }

                if((i != n-1) && (s[i+1][j] != c) && (s[i+1][j] != '.')){
                    d.insert(s[i+1][j]);
                }
                if((i != 0) && (s[i-1][j] != c) && (s[i-1][j] != '.')){
                    d.insert(s[i-1][j]);
                }
            }
        }
    }
    cout << d.size();
    return 0;
}
