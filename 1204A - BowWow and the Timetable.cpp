#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int r = s.size()/2;
    if(s.size() % 2 == 1){
        for(int i = 1; i < s.size(); i++){
            if(s[i] == '1'){
                r++;
                break;
            }
        }
    }
    cout << r;
    return 0;
}


