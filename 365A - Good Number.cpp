#include <iostream>
#include <string>
using namespace std;

int main(){
    int n = 0, k = 0, c = 0;
    string s;
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        cin >> s;
        int r = 0;
        for(int j = 0; j <= k; j++){
            if((int)s.find(j+'0') >= 0)
                r++;
        }
        if(r > k)
            c++;
    }
    cout << c;
    return 0;
}
