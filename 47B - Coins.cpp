#include <iostream>
using namespace std;

int main()
{
    int a[3] = {0};
    string s;
    for(int i = 0; i < 3; i++){
        cin >> s;
        if(s[1] == '>'){
            a[s[0] - 'A']++;
        }
        else{
            a[s[2] - 'A']++;
        }
    }

    if(a[0] == a[1] || a[1] == a[2] || a[0] == a[2])
        cout << "Impossible";
    else{
        char x, y, z;
        for(int i = 0; i < 3; i++){
            if(a[i] == 0)
                x = i + 'A';
            else if(a[i] == 1)
                y = i + 'A';
            else
                z = i + 'A';
        }
        cout << x << y << z;
    }
    return 0;

}
