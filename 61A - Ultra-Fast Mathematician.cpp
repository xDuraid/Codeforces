#include <iostream>
#include <string>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
    IOS
    string s1, s2;
    cin >> s1 >> s2;
    for(int i = 0; i < s1.size(); i++){
        if(s1[i] == s2[i])
            cout << '0';
        else
            cout << '1';
    }
    return 0;
}
