#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    cin >> s;
    sort(s.begin(),s.end());
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '+')
            continue;
        cout << s[i];
        if(i != s.size() - 1)
            cout << "+";
    }
    return 0;
}
