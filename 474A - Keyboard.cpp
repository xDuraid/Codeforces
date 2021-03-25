#include <iostream>
#include <string>
using namespace std;
int main()
{
    char D;
    cin >> D;
    string s;
    string key = "qwertyuiop asdfghjkl; zxcvbnm,./ ";
    cin >> s;
    if(D == 'R')
        for(int i = 0; i < s.size(); i++){
            for(int j = 0; j < key.size(); j++){
                if(s[i] == key[j]){
                    cout << key[j-1];
                }
            }
        }
    else{
        for(int i = 0; i < s.size(); i++){
            for(int j = 0; j < key.size(); j++){
                if(s[i] == key[j]){
                    cout << key[j+1];
                }
            }
        }
 
    }
    return 0;
}
