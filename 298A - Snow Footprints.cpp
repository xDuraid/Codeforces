#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    string s;
  
    cin >> n;
    cin >> s;
    
    for(int i = 0; i < n; i++){
        if(s[i] == 'L'){
            cout << i+1 << " " << i;
            break;
        }
        else if(s[i] == 'R'){
            while(s[i] == 'R'){
                i++;
            }
            cout << i << " " << i + 1;
            break;
        }
    }
    return 0;
}
