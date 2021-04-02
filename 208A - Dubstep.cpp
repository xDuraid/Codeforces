#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.size();
    int i = 0;
    while(i < n){
        while(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B'){
            i += 3;
        }
        while(!(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B') && i < n){
            cout << s[i];
            i++;
        }
        cout << " ";
    }
    return 0;
}
