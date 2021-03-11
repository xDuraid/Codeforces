#include <iostream>
#include <string>
using namespace std;

//upper case < 91
//lower case >91
int main()
{
    string s;
    int lower = 0, upper = 0;
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        if(s[i] > 91)
            lower++;
        else
            upper++;
    }
    if(lower < upper){
        for(int i = 0; i < s.size(); i++){
            cout << (char)toupper(s[i]);
        }
    }
    if(lower >= upper){
        for(int i = 0; i < s.size(); i++){
            cout << (char)tolower(s[i]);
        }
    }
    return 0;
}
