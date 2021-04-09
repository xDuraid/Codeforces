#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        if(i == 0 && s[i] == '9')
            cout << s[i];
        else if(s[i] > '4')
            cout << char('9' - s[i] + '0');
        else
            cout << s[i];

    }

    return 0;
}
