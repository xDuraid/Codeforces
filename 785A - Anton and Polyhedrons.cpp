#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int n = 0, faces = 0;
    string s;
    cin >> n;
    while(n--){
        cin >> s;
        if(s[0] == 'T')
            faces += 4;
        else if(s[0] == 'C')
            faces += 6;
        else if(s[0] == 'O')
            faces += 8;
        else if(s[0] == 'D')
            faces += 12;
        else if(s[0] == 'I')
            faces += 20;
    }
    cout << faces;
    return 0;
}
